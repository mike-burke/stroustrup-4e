// Open the file of integers from §X.5[9] for reading (as an ifstream) and read it.

#include <fstream>
#include <iostream>

int main() {

	std::ifstream ifs("numbers.txt");

	for (int i = 0; ifs >> i; )
		std::cout << "Read " << i << "\n";

}
