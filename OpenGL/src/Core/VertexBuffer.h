#pragma once

#include <glad/glad.h>
#include <stdint.h>

namespace dg
{
	class VertexBuffer {
	public:
		VertexBuffer(const void* data, size_t size);
		~VertexBuffer();

		void Bind();
		void Unbind();
		void Delete();

		inline uint32_t GetID() { return m_ID; }

	private:
		uint32_t m_ID;
	};
}
