#pragma once
#include <thread>

struct SurgeonCommand
{
	// TODO
};

class SurgeonConsole
{
public:
	void pollInput();
	void sendCommandToPlanner(SurgeonCommand cmd);
private:
	std::thread pollingThread;
};