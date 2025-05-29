add_library(hardware STATIC
	ArmDriver.cpp
	EncoderReader.cpp
	HalFactory.cpp
)

target_include_directories(hardware
	PUBLIC
		${PROJECT_SOURCE_DIR}/include/hardware
)
