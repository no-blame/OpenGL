#pragma once

#include <glad/glad.h>
#include <stdint.h>

namespace dg
{
	class VertexArray {
	public:
		VertexArray();
		~VertexArray();
		
		void Bind();
		void Unbind();
		void Delete();

		inline uint32_t GetID() { return m_ID; }

		void SetLayout(uint32_t index, int size, GLenum type, size_t stride, const void* offset);
	private:
		uint32_t m_ID;
	};
}