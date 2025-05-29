#pragma once
#include "Pose.h"
#include <vector>

class MotionPlanner
{
public:
	std::vector<double> planTrajectory(const Pose& target);
private:

};
