module;
#include <compare>
#include <chrono>
#include <iostream>
#include <cmath>
export module time;

auto start = std::chrono::high_resolution_clock::now();
auto end = std::chrono::high_resolution_clock::now();

export inline auto current_time() {
	return std::chrono::high_resolution_clock::now();
}

export inline void time_start() {
	start = std::chrono::high_resolution_clock::now();
}

export inline void time_end() {
	end = std::chrono::high_resolution_clock::now();
	std::cout << "\n\nTime : seconds  : " << std::chrono::duration_cast<std::chrono::seconds>(end - start).count() << "\n";
	std::cout << "\n\nTime : miliseconds  : " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << "\n";
	std::cout << "\n\nTime : microseconds : " << std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() << "\n";
	std::cout << "\n\nTime : nanoseconds  : " << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() << "\n\n\n";
}

