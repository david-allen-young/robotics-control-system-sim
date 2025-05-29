add_library(system STATIC
	Logger.cpp
	RealTimeScheduler.cpp
	Watchdog.cpp
)

target_include_directories(system
	PUBLIC
		${PROJECT_SOURCE_DIR}/include/system
)
