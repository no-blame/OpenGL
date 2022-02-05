#pragma once
#include "Window.h"

namespace dg {
	class Application
	{
	public:
		Application(Window& window);
		~Application();

		void Run();
	private:
		void Update();
		void Render();

		Window* window;
		VertexBuffer* vertexBuffer;
		VertexArray* vertexArray;
		IndexBuffer* indexBuffer;
	};
}
