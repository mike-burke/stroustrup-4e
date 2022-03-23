// Write a program that reads a name (a string) and an age (an int) from the standard input stream cin. Then output a message including the name and age to the standard output stream cout.

#import <iostream>

int main() {

	std::string name;
	int age;

	std::cout << "Enter a name and an age, separated by a space: ";
	std::cin >> name >> age;

	std::cout << name << ", " << age << "\n";
}
