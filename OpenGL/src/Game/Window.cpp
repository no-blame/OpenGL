#include "Window.h"

namespace dg
{
	Window::Window(uint32_t width, uint32_t height, const std::string& title,
		GLFWmonitor* monitor, GLFWwindow* share)
	{
		this->Init();

		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);

		this->m_ID = glfwCreateWindow(width, height, title.c_str(), monitor, share);
		glfwMakeContextCurrent(this->m_ID);

		LOG_ASSERT(gladLoadGLLoader((GLADloadproc)glfwGetProcAddress), 
			"Could not initialize GLAD.")
			
		LOG_INFO("Successfully initialized GLFW with version {0} {1}", glGetString(GL_VERSION), 
			glGetString(GL_RENDERER));
	}
	Window::~Window()
	{
		glfwTerminate();
		glfwDestroyWindow(this->m_ID);
	}
	void Window::Init()
	{
		Log::init();
		LOG_ASSERT(glfwInit(), "GLFW Could not be initialized.");
	}
}