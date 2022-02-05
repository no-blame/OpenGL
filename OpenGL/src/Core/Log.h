#pragma once

#include <memory>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <memory>
#include <spdlog/fmt/ostr.h>


namespace dg
{
	class Log
	{
	public:
		static void init();

		inline static std::shared_ptr<spdlog::logger>& getLogger() { return s_Logger; }

	private:
		static std::shared_ptr<spdlog::logger> s_Logger;
	};
}
#define LOG_INFO(...)  :: dg::Log::getLogger()->info(__VA_ARGS__)
#define LOG_TRACE(...) :: dg::Log::getLogger()->trace(__VA_ARGS__)
#define LOG_WARN(...)  :: dg::Log::getLogger()->warn(__VA_ARGS__)
#define LOG_ERROR(...) :: dg::Log::getLogger()->error(__VA_ARGS__)