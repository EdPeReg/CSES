// https://cses.fi/problemset/task/1070
// Time: 30m

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

int main() {
	size_t n;
	std::vector<size_t> v;
	std::cin >> n;

	for(size_t i = 1; i <= n; ++i) {
		v.push_back(i);
	}

	do {
		bool find = true;
		for(size_t i = 1; i < v.size(); ++i) {
			if(abs(v.at(i) - v.at(i-1)) == 1) {
				find = false;
				break;
			} 
		}

		if(find) {
			for(const auto& e : v) {
				std::cout << e << " ";
			}
			std::cout << '\n';
			break;
		} 
	} while(std::next_permutation(v.begin(), v.end()));
	
	return 0;
}
