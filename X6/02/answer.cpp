// Write a program with two threads: one that writes hello every second and one that writes world! every second

#include <thread>
#include <chrono>
#include <iostream>

void say(const std::string& s) {
	while (true) {
		std::cout << s << "\n";
		std::this_thread::sleep_for(std::chrono::seconds{1});
	}
}

int main() {

	std::thread hello { say, std::string {"hello"} };
	std::thread world { say, std::string {"world"} };

	hello.join();
	world.join();
}
