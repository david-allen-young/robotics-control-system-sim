#include "RealTimeScheduler.h"
#include "ArmDriver.h"
#include "PIDController.h"
#include "MotionPlanner.h"
#include "SurgeonConsole.h"
#include <thread>

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
				if (trajectory.empty() || current.empty())
				{
					continue;
				}
				auto control = pid.update(trajectory[0], current[0]);
				std::vector<double> angles = { control };
				driver.sendJointTargets(angles);
			}
		}
	);

	scheduler.bindThread(controlThread, 0, 90);
	controlThread.join();

	return 0;
}
