// Initialize a vector<int> with the elements 5, 9, −1, 200, and 0. Print it. Sort is, and print it again.


#include <vector>
#include <iostream>
#include <algorithm>

int main() {

	std::vector<int> vi { 5, 9, -1, 200, 0 };

	std::cout << "Unsorted\n";
	for (int i : vi)
		std::cout << i << "\n";

	std::cout << "Sorted\n";

	std::sort(vi.begin(), vi.end());

	for (int i : vi)
		std::cout << i << "\n";

}
