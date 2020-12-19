#include <iostream>
#include <algorithm>
#include <set>

int main() {
	std::set<int> nums;
	size_t n, x;
	std::cin >> n;

	for(size_t i = 0; i < n-1; ++i) {
		std::cin >> x;
		nums.insert(x);
	}

	for(int i = 1; i <= n; ++i) {
		if(nums.find(i) == nums.end()) {
			std::cout << i << '\n';
			break;
		}
	}

	return 0;
}
