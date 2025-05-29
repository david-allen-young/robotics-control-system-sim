add_executable(launch_robot
	launch_robot.cpp
)

target_include_directories(launch_robot
	PRIVATE
		${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(launch_robot
	PRIVATE
		common
		control
		hardware
		interface
		system
		vision
)
