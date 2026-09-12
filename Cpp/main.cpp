#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <imgui.h>
#include <backends/imgui_impl_glfw.h>
#include <backends/imgui_impl_opengl3.h>
#include <iostream>
#include "Window.h"
int main()
{

    
    
    Window window;

    window.InitGlfwContext();

    GLFWwindow* windowpointer = window.InitWindow(1000,1000,1,"Application");

    


    glfwSwapInterval(1);
    if(windowpointer ==nullptr)
    {
        std::cout<<"Window Not Initialize \n";
        return 0;
    }
        glfwMakeContextCurrent(windowpointer );
        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
            {
             std::cout << "Failed to initialize GLAD" << std::endl;
             return -1;
            }



      while(!glfwWindowShouldClose(windowpointer ) )
      {

        glClearColor(0.0f,0.0f,0.0f,1.0f);

        glClear(GL_COLOR_BUFFER_BIT);

          
        glfwSwapBuffers(windowpointer);
        glfwPollEvents();

      }
      glfwDestroyWindow(windowpointer );

      glfwTerminate();

    
    

return 0;
}
