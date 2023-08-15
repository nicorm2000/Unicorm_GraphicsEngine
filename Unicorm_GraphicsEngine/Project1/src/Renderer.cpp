#include "Renderer.h"

void Renderer::ClearScreen()
{
	/* Render here */
	glClear(GL_COLOR_BUFFER_BIT);
}

void Renderer::PostRender(GLFWwindow* window)
{
	/* Swap front and back buffers */
	glfwSwapBuffers(window);

	/* Poll for and process events */
	glfwPollEvents();
}