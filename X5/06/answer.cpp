// Redo §X.5[5], storing several (name,age) pairs in a class. Doing the reading and writing using your own >> and << operators.

#import <iostream>
#import <vector>

struct Stat {
	Stat() : age {0} {} 
	Stat(std::string n, int a) : name{n}, age{a} {}

	std::string name;
	int age;
};

std::ostream& operator << (std::ostream& os, const Stat& s) {
	return os << s.name << " (" << s.age << ")";
}

std::istream& operator >> (std::istream& is, Stat& s) {
	std::string n;
	int a;

	if ((is >> n) && (n != "q") && (is >> a)) 
		s = Stat {n,a};
	else 
		is.setstate(std::ios_base::failbit);

	return is;
}



class Stats {

	public:
		const std::vector<Stat>& get_stats() const { return stats; }
		void add_stat(Stat s) { stats.push_back(s); }
	private:
		std::vector<Stat> stats;
};

std::ostream& operator << (std::ostream& os, const Stats& s) {
	for (auto& a : s.get_stats())
		os << a << "\n";
	return os;
}

std::istream& operator >> (std::istream& is, Stats& ss) {

	for (Stat s; is >> s;)
		ss.add_stat(s);
	return is;
}

int main() {

	Stats s;

	std::cout << "Enter a set of name and an age pairs - space separated, one per line ('q' to quit) :";

	std::cin >> s;
	std::cout << s;
}
