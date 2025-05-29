#pragma once
#include <vector>

// currently stubbed
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
