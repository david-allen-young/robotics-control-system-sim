add_library(control STATIC
	MotionPlanner.cpp
	PIDController.cpp
	StateMachine.cpp
)

target_include_directories(control
	PUBLIC
		${PROJECT_SOURCE_DIR}/include/control
)

target_link_libraries(control
	PUBLIC
		common
)
