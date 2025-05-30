#pragma once
#include <thread>
#include <chrono>

class RealtimeScheduler
{
public:
	void bindThread(std::thread& t, int cpu, int priority);
	void setWatchdogTimeout(std::chrono::milliseconds timeout);
private:

};
