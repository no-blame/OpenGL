#include "Application.h"

namespace dg
{
	Application::Application(Window& window)
	{
		this->window = &window;


		float vertices[3 * 4] = {
			-0.5f, -0.5f, 0.0f,		
			-0.5f,  0.5f, 0.0f,
			 0.5f,  0.7f, 0.0f,
			 0.5f, -0.7f, 0.0f
		};
		uint32_t indices[] = { 0, 1, 2,		0, 3, 2 };

		this->vertexArray = new VertexArray();
		this->vertexBuffer = new VertexBuffer(vertices, sizeof(vertices));
		this->indexBuffer = new IndexBuffer(indices, sizeof(indices));
		
		this->vertexArray->SetLayout(0, 3, GL_FLOAT, sizeof(float) * 3, nullptr);
	}

	Application::~Application()
	{
		delete vertexBuffer;
		delete indexBuffer;
		delete vertexArray;
	}

	void Application::Run()
	{
		while (!glfwWindowShouldClose(this->window->GetID())) {
			this->Render();
			this->Update();
		}
	}

	void Application::Update()
	{
		glfwPollEvents();
	}

	void Application::Render()
	{
		glfwSwapBuffers(this->window->GetID());
		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(43.f / 255.f, 150 / 255.f, 237 / 255.f, 1.0);

		this->vertexArray->Bind();
		glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
	}

}
