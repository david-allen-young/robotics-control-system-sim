#include "ArmDriver.h"
#include <iostream>

// currently stubbed
void ArmDriver::sendJointTargets(const std::vector<double>& angles)
{
	// TODO
	if (angles.empty())
	{
		return;
	}
	std::cout << "[ArmDriver] sending angle " << angles[0] << std::endl;
}

// currently stubbed
std::vector<double> ArmDriver::readJointAngles()
{
	// TODO
	std::cout << "[ArmDriver] reading joint angles." << std::endl;
	return { 0 }; // temp
}
