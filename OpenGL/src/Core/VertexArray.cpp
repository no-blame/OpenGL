#include "VertexArray.h"

namespace dg
{
	dg::VertexArray::VertexArray()
	{
		glGenVertexArrays(1, &this->m_ID);
		glBindVertexArray(this->m_ID);
	}
	VertexArray::~VertexArray()
	{
	}
	void VertexArray::Bind()
	{
		glBindVertexArray(this->m_ID);
	}
	void VertexArray::Unbind()
	{
		glBindVertexArray(0);
	}
	void VertexArray::Delete()
	{
		glDeleteVertexArrays(1, &this->m_ID);
	}
	void VertexArray::SetLayout(uint32_t index, int size, GLenum type, size_t stride, const void* offset)
	{
		glEnableVertexAttribArray(index);
		glVertexAttribPointer(index, size, type, GL_FALSE, stride, offset);
	}
}