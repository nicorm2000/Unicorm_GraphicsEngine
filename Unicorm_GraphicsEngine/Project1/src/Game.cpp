#include "Window.h"
#include "Game.h"

int main(void)
{
    /* Initialize the library */
    if (!glfwInit())
        return -1;

    Window* window = new Window();

    window->InitWindow();
}