// https://cses.fi/problemset/task/1070
// Time: 30m

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

int main() {
	size_t n;
	std::vector<size_t> v1;
	std::vector<size_t> v2;
	std::cin >> n;

	for(size_t i = 1; i <= n; ++i) {
		if(i % 2 == 1) {
			v1.push_back(i);
		} else {
			v2.push_back(i);
		}
	}
	if(n == 2 or n == 3) {
		std::cout << "NO SOLUTION\n";
	} else {
		for(auto& e : v2) {
			std::cout << e << " ";
		}

		for(auto& e : v1) {
			std::cout << e << " ";
		}
	}

	return 0;

}
