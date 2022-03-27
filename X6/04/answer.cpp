// Repeat the histogram drawing example from §5.6.3 for a normal_distribution and 30 rows.

#include <iostream>
#include <random>
#include <vector>
using namespace std;

class Rand_double {

	public:
		Rand_double(double low, double high) :dist{low,high} { }
		int operator()() { return dist(re); }

	private:
		default_random_engine re;
		normal_distribution<double> dist;
};


int main()
{
	constexpr int histogram_size = 30;

	Rand_double rnd {0,histogram_size-1};
	vector<int> histogram(histogram_size);

	for (int i=0; i!=200; ++i) 
		++histogram[rnd()]; 
	
	for (int i = 0; i != histogram.size(); ++i) {
		cout << i << '\t';
		for (int j=0; j!=histogram[i]; ++j) cout << '*';
			cout << endl;
     }
}

