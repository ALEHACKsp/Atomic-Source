#pragma once
#include "common.hpp"
#include <functional>

namespace big::menu::timers {
	class timer {
	public:
		void start(unsigned long long ticks);
		bool is_ready();
		void reset();
	private:
		unsigned long long m_ready_at;
		bool m_tick;
	};

	void run_timed(int* timer, int ms, std::function<void()> callback);
}