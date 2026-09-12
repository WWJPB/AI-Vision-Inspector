#include "Window.h"
    Window::Window()
    {

    }

void Window::InitGlfwContext()
    {
        if (!glfwInit()) 
        {
         std::cout << "Failed to initialize GLFW \n";
          exit(-1); 
        }  

        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    }
GLFWwindow * Window::InitWindow(int width,int height,int swapinterval,std::string title)
    {
        GLFWwindow * windowpointer =glfwCreateWindow(width,height,title.c_str(),NULL,NULL);
        glfwSwapInterval(swapinterval);

#ifdef WINDOW_DEBUG
        if(windowpointer==nullptr)
            std::cout<<"Failed to create window: "<<title<<"\n";
        else 
            std::cout<<"Window crated: "<<title<<"\n";

#endif
        return windowpointer;
    }
GLFWwindow  * Window::InitWindow(int width,int height,int posx,int posy,int swapinterval,std::string title)
    {
        GLFWwindow  * windowpointer =glfwCreateWindow(width,height,title.c_str(),NULL,NULL);
        glfwSwapInterval(swapinterval);
        glfwSetWindowPos(windowpointer, posx, posy);

#ifdef WINDOW_DEBUG
        if(windowpointer==nullptr)
            std::cout<<"Failed to create window: "<<title<<"\n";
        else 
            std::cout<<"Window crated: "<<title<<"\n";

#endif
        return windowpointer;

    }
void Window::InitOpenGlContext(GLFWwindow * window)
    {
        glfwMakeContextCurrent(window);
        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
        {
         std::cout << "Failed to initialize GLAD \n";
        // glfwDestroyWindow(window);
         glfwTerminate();
         exit(-1);
        }
    }
void EventsForWindow(GLFWwindow *& window)
    {

    }

  