add_library(interface STATIC
	InputDeviceManager.cpp
	SurgeonConsole.cpp
)

target_include_directories(interface
	PUBLIC
		${PROJECT_SOURCE_DIR}/include/interface
)
