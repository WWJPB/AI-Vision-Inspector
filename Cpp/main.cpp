#include <glad/glad.h>
#include <GLFW/glfw3.h>


#include <iostream>

#include <Window.h>
#include <Interface.h>

int main()
{
    Window window;

    Interface interface;

    window.InitGlfwContext();

    GLFWwindow* windowpointer = window.InitWindow(1000,1000,1,"Application");
    window.InitOpenGlContext(windowpointer);

    interface.Init(windowpointer);
    
      while(!glfwWindowShouldClose(windowpointer ) )
      {

        glClearColor(0.0f,0.0f,0.0f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        interface.Render();
          
        glfwSwapBuffers(windowpointer);
        glfwPollEvents();

      }
      interface.ShutDown();
      glfwDestroyWindow(windowpointer );
      glfwTerminate();

    
    

return 0;
}
