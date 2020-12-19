// https://cses.fi/problemset/task/1069
// Time 24m

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
		} else {
			nums.push_back(count);
			count = 1;
		}
	}

	std::cout << *std::max_element(nums.begin(), nums.end());

	return 0;
}
