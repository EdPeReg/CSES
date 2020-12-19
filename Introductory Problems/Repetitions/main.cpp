// https://cses.fi/problemset/task/1069
// Time 30m

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> nums;
	std::string dna;
	std::cin >> dna;

	int count = 1;
	for(size_t i = 0; i < dna.size()-1; ++i) {
		if(dna.at(i) == dna.at(i+1)) {
			++count;
			nums.push_back(count);
		} else {
			count = 1;
			nums.push_back(count);
		}
	}

	std::cout << *std::max_element(nums.begin(), nums.end());

	return 0;
}
