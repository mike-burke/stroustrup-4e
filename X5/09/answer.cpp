// Open a file for writing (as an ofstream) and write a few hundred integers to it.

#include <fstream>

int main() {

	std::ofstream ofs("numbers.txt");

	for (int i = 0; i <= 300; i++)
		ofs << i << " ";

}
