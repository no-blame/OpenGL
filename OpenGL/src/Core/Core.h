#pragma once
#include "Log.h"
#include "VertexBuffer.h"
#include "VertexArray.h"
#include "IndexBuffer.h"

#define LOG_ASSERT(x, ...)  {if(!(x)) {LOG_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak();}}