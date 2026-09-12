#define INTERFACE_H
#ifndef INTERFACE_H


#include <glad/glad.c>
#include <GLFW/glfw.h>

#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"


class Interface
{
    void Init( GLFWwindow  * window);
    void Render();
    void ShutDown();





};
#endif