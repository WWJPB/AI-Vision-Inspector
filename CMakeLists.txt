cmake_minimum_required(VERSION 3.10)
set(App Application)
project(${App})

set(Dep Dependecies)
set(Cpp Cpp)

file(GLOB_RECURSE SOURCEFILES "${Cpp}/src/*.cpp")

add_executable( ${App} Cpp/main.cpp
		${SOURCEFILES}
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
				${Cpp}/Debug/include
				${Cpp}/include
				)
target_link_libraries(${App} PRIVATE  

	)
if(UNIX)
target_link_libraries(${App} PRIVATE
	glfw 
	GL 
	X11 
	pthread 
	Xrandr 
	Xi 
	dl
	imgui
	ccap
)
endif()
				
				



add_custom_command(TARGET ${App} POST_BUILD COMMAND $<TARGET_FILE:Application> )
