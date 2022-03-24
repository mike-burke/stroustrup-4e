// Repeat §X.5[7] with a vector<string> initialized with "Kant", "Plato", "Aristotle", "Kierkegard", and "Hume".


#include <vector>
#include <iostream>
#include <algorithm>

int main() {

	std::vector<std::string> vs { "Kant", "Plato", "Aristotle", "Kierkegard", "Hume" };

	std::cout << "Unsorted\n";
	for (std::string s : vs)
		std::cout << s << "\n";

	std::cout << "Sorted\n";

	std::sort(vs.begin(), vs.end());

	for (std::string s : vs)
		std::cout << s << "\n";

}
