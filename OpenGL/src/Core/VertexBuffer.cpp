#include "VertexBuffer.h"

namespace dg
{
	VertexBuffer::VertexBuffer(const void* data, size_t size)
	{
		glGenBuffers(1, &this->m_ID);
		glBindBuffer(GL_ARRAY_BUFFER, this->m_ID);
		glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
	}
	VertexBuffer::~VertexBuffer()
	{
	}
	void VertexBuffer::Bind()
	{
		glBindBuffer(GL_ARRAY_BUFFER, this->m_ID);
	}
	void VertexBuffer::Unbind()
	{
		glBindBuffer(GL_ARRAY_BUFFER, 0);
	}
	void VertexBuffer::Delete()
	{
		glDeleteBuffers(1, &this->m_ID);
	}
}