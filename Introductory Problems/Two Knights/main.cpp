// https://cses.fi/problemset/task/1072/
// https://math.stackexchange.com/questions/3266257/number-of-ways-two-knights-can-be-placed-such-that-they-dont-attack/3266324#3266324

#include <iostream>
#include <cmath>

int main() {
	int n;
	std::cin >> n;

	for(int i = 1; i <= n; ++i) {
		size_t result = (pow(i,2)*(pow(i,2)-1)/2) - (4*(i-1)*(i-2));
		std::cout << result << '\n';
	}

	return 0;
}
