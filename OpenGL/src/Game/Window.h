#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <Core.h>

namespace dg
{
	class Window {
	public:
		
		Window(uint32_t width, uint32_t height, const std::string& title,
			GLFWmonitor* monitor = NULL, GLFWwindow* share = NULL);
		~Window();

		inline GLFWwindow* GetID() { return m_ID; }

	private:
		void Init();
		GLFWwindow* m_ID;
	};
}
