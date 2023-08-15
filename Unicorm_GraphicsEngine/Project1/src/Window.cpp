#include "Window.h"
#include "Renderer.h"

Renderer* renderer = new Renderer();

int Window::WindowChecker()
{
    if (!glfwWindow)
    {
        CloseWindow();

        return -1;
    }
}

void Window::CloseWindow()
{
    glfwTerminate();
}

void Window::MakeCurrentContext(GLFWwindow* glfwWindow)
{
    /* Make the window's context current */
    glfwMakeContextCurrent(glfwWindow);
}

int Window::InitWindow()
{
    /* Create a windowed mode window and its OpenGL context */
    glfwWindow = glfwCreateWindow(width, height, title, NULL, glfwWindow);

    WindowChecker();

    MakeCurrentContext(glfwWindow);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(glfwWindow))
    {
        renderer->ClearScreen();

        renderer->PostRender(glfwWindow);
    }

    CloseWindow();

    delete renderer;

    return 0;
}