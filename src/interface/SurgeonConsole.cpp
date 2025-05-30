#include "SurgeonConsole.h"
#include <iostream>

// currently stubbed
void SurgeonConsole::pollInput()
{
	while (true)
	{
		SurgeonCommand cmd;
		cmd.target = Pose(); // dummy data for now
		commandQueue.push(cmd);
		std::cout << "[Console] pushed command." << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}
}

void SurgeonConsole::start()
{
	pollingThread = std::thread(&SurgeonConsole::pollInput, this);
}

// currently stubbed
SurgeonCommand SurgeonConsole::getNextCommand()
{
	// TODO
	return {};
}
