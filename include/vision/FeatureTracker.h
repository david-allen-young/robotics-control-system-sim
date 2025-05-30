#pragma once
#include "Pose.h"
#include <thread>

class FeatureTracker
{
public:
	void run();
	Pose estimateTissuePose();
private:
	std::thread visionThread;
};
