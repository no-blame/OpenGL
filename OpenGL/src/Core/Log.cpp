#include "Log.h"


namespace dg
{
	std::shared_ptr<spdlog::logger> Log::s_Logger;

	void Log::init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");

		s_Logger = spdlog::stdout_color_mt("GAME");
		s_Logger->set_level(spdlog::level::trace);

	}

}
