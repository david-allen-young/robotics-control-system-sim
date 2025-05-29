#pragma once
#include <vector>

struct Pose
{
	// TODO
};

class MotionPlanner
{
public:
	std::vector<double> planTrajectory(const Pose& target);
private:

};
