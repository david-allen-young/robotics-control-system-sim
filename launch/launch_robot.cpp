#include "RealTimeScheduler.h"
#include "ArmDriver.h"
#include "PIDController.h"
#include "MotionPlanner.h"
#include "SurgeonConsole.h"
#include <thread>
#include <iostream>

int main()
{
	RealtimeScheduler scheduler;
	ArmDriver driver;
	PIDController pid;
	MotionPlanner planner;
	SurgeonConsole console;

	//console.pollInput();
	console.start();

	auto controlThread = std::thread(
		[&]()
		{
			while (true)
			{
				//Pose target = console.getNextCommand();
				SurgeonCommand cmd = console.getNextCommand();
				Pose target = cmd.target;
				auto trajectory = planner.planTrajectory(target);
				auto current = driver.readJointAngles();
				//std::cout << "[DEBUG] trajectory.size() == " << trajectory.size()
				//	<< " current.size() == " << current.size() << std::endl;
				if (trajectory.empty() || current.empty())
				{
					continue;
				}
				auto control = pid.update(trajectory[0], current[0]);
				std::vector<double> angles = { control };
				driver.sendJointTargets(angles);
				std::this_thread::sleep_for(std::chrono::milliseconds(50));
			}
		}
	);

	scheduler.bindThread(controlThread, 0, 90);
	controlThread.join();

	return 0;
}
