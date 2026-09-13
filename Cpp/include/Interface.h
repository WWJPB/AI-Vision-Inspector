//#define INTERFACE_H
//#ifndef INTERFACE_H




#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>
#include <iostream>


class Interface
{
    public:
    void Init( GLFWwindow  * window);
    void Render();
    void ShutDown();





};
//#endif