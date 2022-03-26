// _Time a loop. Write out the time in milliseconds. Do this for the default setting of your compiler and for a setting using an optimizer (e.g., −O2 or "release"). Be careful not to have the optimizer eliminate your whole loop as dead code because you did not use a result._

#include <thread>
#include <iostream>

using namespace std;

int main() {

	auto t0 = chrono::high_resolution_clock::now();

	int a;
	for (int i = 0; i < 1000; ++i) {
		a+=i;
	}
	
	auto t1 = chrono::high_resolution_clock::now();

	cout << chrono::duration_cast<chrono::nanoseconds>(t1-t0).count() << " nanoseconds.\n";

	// unoptimized run = 2026 ns
	// optimized (-O2) run = 73 ns
}
