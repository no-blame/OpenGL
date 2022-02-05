#include "IndexBuffer.h"

namespace dg
{
	IndexBuffer::IndexBuffer(const void* data, size_t size)
	{
		glGenBuffers(1, &this->m_ID);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, this->m_ID);
		glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
	}
	IndexBuffer::~IndexBuffer()
	{
	}
	void IndexBuffer::Bind()
	{
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, this->m_ID);
	}
	void IndexBuffer::Unbind()
	{
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
	}
	void IndexBuffer::Delete()
	{
		glDeleteBuffers(1, &this->m_ID);
	}
}