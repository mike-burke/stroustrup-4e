// Redo §X.5[5], storing several (name,age) pairs in a class. Doing the reading and writing using your own >> and << operators.

#import <iostream>


class Stats {

	public:

		Stats() : name {""}, age {0} {}
		Stats(std::string n, int a) : name {n}, age {a} { }
	
		std::string get_name() const { return name; }
		int get_age() const { return age; }

	private:
		std::string name;
		int age;
};

std::ostream& operator << (std::ostream& os, const Stats& s) {
	return os << s.get_name() << " (" << s.get_age() << ")";
}

std::istream& operator >> (std::istream& is, Stats& s) {
	std::string n;
	int a;

	if ((is >> n) && (is >> a)) {
		s = Stats {n,a};
	}
	return is;
}

int main() {

	Stats s;

	std::cout << "Enter a name and an age, separated by a space: ";
	std::cin >> s;
	std::cout << s << "\n";
}
