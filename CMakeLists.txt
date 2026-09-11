cmake_minimum_required(VERSION 3.10)
set(App Application)
project(${App})

set(Dep Dependecies)

add_executable(${App} C++/main.cpp
		${Dep}/glad/src/glad.c  
)
add_subdirectory(${Dep}/CameraCapture)
add_subdirectory(${Dep}/glfw)
add_subdirectory(${Dep}/imgui)

target_include_directories(${App} PRIVATE ${Dep}/glad/include
				${Dep}/glfw/include
				${Dep}/CameraCapture/include
				${Dep}/imgui
				${Dep}/StbImage
				)
target_link_libraries(${App} PRIVATE  
	glfw
	imgui
	ccap
	)
if(UNIX)
target_link_libraries(${App} PRIVATE
	GL
	dl
	pthread
)
endif()
				
				



add_custom_command(TARGET ${App} POST_BUILD COMMAND $<TARGET_FILE:Application> )
