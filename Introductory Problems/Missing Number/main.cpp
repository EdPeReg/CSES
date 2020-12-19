// https://cses.fi/problemset/task/1083/
// Time: 30m.
// 
// Using a set for find, instead vector to use std::find did a lot of difference
// when there are 200000 elements.
//
// std::find = O(n)
// find() = (O(log N)).
//
// std::vector() = doesn't have its elements sorted.
// std::set() = its elements are sorted.

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
