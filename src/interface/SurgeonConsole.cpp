#include "SurgeonConsole.h"

// currently stubbed
void SurgeonConsole::pollInput()
{
	SurgeonCommand cmd;
	cmd.target = Pose(); // dummy data for now
	commandQueue.push(cmd);
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
}

//// currently stubbed
//void SurgeonConsole::sendCommandToPlanner(SurgeonCommand cmd)
//{
//	// TODO
//}

void SurgeonConsole::start()
{
	pollingThread = std::thread(&SurgeonConsole::pollingThread, this);
}

// currently stubbed
SurgeonCommand SurgeonConsole::getNextCommand()
{
	// TODO
	return {};
}
