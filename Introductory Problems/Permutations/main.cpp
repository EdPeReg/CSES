// https://cses.fi/problemset/task/1070
// Time: 2 days.

/* 
 * One approach is to generate each permutation of 1 to n. Using
 * std::next_permutation(), and trying to do the operation for each
 * number. That can work for small numbers, not for huge numbers.
 *
 * There is a pattern, you can see that there are only two cases without
 * solution, n = 2, n = 3.
 *
 * The pattern is to put first all even numbers, and put all odd numbers.
 * */

#include <iostream>
#include <vector>

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
