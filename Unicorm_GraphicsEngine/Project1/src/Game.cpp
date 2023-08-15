#include "Window.h"

Window* window = new Window();

int main(void)
{
    /* Initialize the library */
    if (!glfwInit())
        return -1;

    window->InitWindow();

    delete window;
}