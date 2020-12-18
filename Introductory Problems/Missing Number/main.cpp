#include <iostream>
#include <algorithm>
#include <vector>

int main() {
	std::vector<int> nums;
	int n, x;
	std::cin >> n;

	for(int i = 0; i < n; ++i) {
		std::cin >> x;
		nums.push_back(x);
	}

	for(int i = 1; i < nums.size(); ++i) {
		if(std::find(nums.begin(), nums.end(), i) == nums.end()) {
			std::cout << i << '\n';
			break;
		}
	}

	return 0;
}
