#pragma once
#include "Pose.h"
#include "ThreadSafeQueue.h"
#include <thread>

struct SurgeonCommand
{
	Pose target;
	// TODO: other members
};

class SurgeonConsole
{
public:
	void start();
	void pollInput();
	//void sendCommandToPlanner(SurgeonCommand cmd);
	SurgeonCommand getNextCommand();
private:
	ThreadSafeQueue<SurgeonCommand> commandQueue;
	std::thread pollingThread;
};
