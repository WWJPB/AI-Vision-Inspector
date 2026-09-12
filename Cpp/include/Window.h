//#define WINDOW_H
//#ifndef WINDOW_H
#include <DebugDirectives.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <cstdlib>
#include <ostream>

class Window
{
    public:

    Window();

    void InitGlfwContext();
    GLFWwindow * InitWindow(int width,int height,int swapinterval,std::string title);
    GLFWwindow * InitWindow(int width,int height,int posx,int posy,int swapinterval,std::string title);
    void InitOpenGlContext();

   
    
};
//#endif