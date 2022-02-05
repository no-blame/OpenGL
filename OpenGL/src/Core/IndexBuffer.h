#pragma once

#include <glad/glad.h>
#include <stdint.h>

namespace dg
{
	class IndexBuffer {
	public:
		IndexBuffer(const void* data, size_t size);
		~IndexBuffer();

		void Bind();
		void Unbind();
		void Delete();

		inline uint32_t GetID() { return m_ID; }

	private:
		uint32_t m_ID;
	};
}
