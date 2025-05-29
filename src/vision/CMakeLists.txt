add_library(vision STATIC
	FeatureTracker.cpp
	ImageStream.cpp
)

target_include_directories(vision
	PUBLIC
		${PROJECT_SOURCE_DIR}/include/vision
)
