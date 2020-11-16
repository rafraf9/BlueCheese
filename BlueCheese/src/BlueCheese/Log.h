#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace BC
{
	class BC_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

//core log macros
#define BC_CORE_ERROR(...) BC::Log::GetCoreLogger()->error(__VA_ARGS__)
#define BC_CORE_WARN(...)  BC::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define BC_CORE_INFO(...)  BC::Log::GetCoreLogger()->info(__VA_ARGS__)
#define BC_CORE_TRACE(...) BC::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define BC_CORE_FATAL(...) BC::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//client log macros
#define BC_ERROR(...) BC::Log::GetClientLogger()->error(__VA_ARGS__)
#define BC_WARN(...)  BC::Log::GetClientLogger()->warn(__VA_ARGS__)
#define BC_INFO(...)  BC::Log::GetClientLogger()->info(__VA_ARGS__)
#define BC_TRACE(...) BC::Log::GetClientLogger()->trace(__VA_ARGS__)
#define BC_FATAL(...) BC::Log::GetClientLogger()->fatal(__VA_ARGS__)


