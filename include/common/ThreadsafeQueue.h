#pragma once
#include <queue>
#include <mutex>

template<typename T>
class ThreadSafeQueue {
public:
    void push(const T& item) {
        std::lock_guard<std::mutex> lock(mtx);
        q.push(item);
        cv.notify_one();
    }
    T pop() {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock, [&] { return !q.empty(); });
        T val = q.front();
        q.pop();
        return val;
    }
private:
    std::queue<T> q;
    std::mutex mtx;
    std::condition_variable cv;
};

