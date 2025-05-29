#pragma once
#include <thread>

class SurgeonConsole
{
public:
	void pollInput();
	void sendCommandToPlanner(SurgeonCommand cmd);
private:
	std::thread pollingThread;
};