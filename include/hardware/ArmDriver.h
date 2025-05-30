#pragma once
#include <vector>

class ArmDriver
{
public:
	void sendJointTargets(const std::vector<double>& angles);
	std::vector<double> readJointAngles();
private:

};
