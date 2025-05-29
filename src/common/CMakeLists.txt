add_library(common STATIC
	Pose.cpp
	ThreadSafeQueue.cpp
	Types.cpp
)

target_include_directories(common
	PUBLIC
		${PROJECT_SOURCE_DIR}/include/common
)
