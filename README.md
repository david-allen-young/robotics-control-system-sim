# Robotics Control System Simulation

This project simulates the core control architecture for a modular, multi-threaded robotic system. It is structured for testability, real-time scheduling, hardware abstraction, and eventual integration with live or simulated input/output streams.

## Overview

The system is divided into logical modules:

- **common/**: Shared types and utilities (`Pose`, `ThreadSafeQueue`, etc.)
- **control/**: Motion planning, PID control, and high-level task execution
- **hardware/**: Abstract drivers for actuators and encoders
- **interface/**: Input devices like a surgeon console or other command sources
- **system/**: Core infrastructure like schedulers, watchdogs, and logging
- **vision/**: Feature tracking and pose estimation from visual data
- **launch/**: Executable entry point (`main()`)

Currently, the implementation consists of stubbed classes and method shells, with console output verifying that the threading and module call structure are working correctly.

## Build Instructions

This project uses CMake (C++17 required).

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

To run:

```bash
./launch/launch_robot
```

## Current Status

- ✅ Project compiles and links successfully
- ✅ Threaded control and input systems are live
- ✅ Console output confirms end-to-end skeleton behavior
- 🛠 All major subsystems are stubbed and ready for feature implementation
- ⏳ Logging and shutdown coordination to follow

## Planned Features

- Full implementation of `Pose`, `PIDController`, and `MotionPlanner`
- Cross-platform thread scheduling and watchdog timers
- Realistic command and trajectory generation
- File and console-based logger system
- Optional OpenCV-based vision tracking
- Test suite using Catch2 or Google Test

## License

[MIT](LICENSE)
