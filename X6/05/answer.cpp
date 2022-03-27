// Use a regex to find all decimal numbers in a file.

#include <iostream>
#include <fstream>
#include <regex>
#include <string>

using namespace std;

int main() {

	ifstream ifs("numbers.txt");

	regex pat (R"(\d+\.\d+)");
	smatch matches;

	for (string s;  getline(ifs,s); ) {
		if (regex_search(s,matches,pat))
			cout << matches[0] << "\n";
	}
}
