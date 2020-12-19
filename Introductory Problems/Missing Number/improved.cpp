// https://cses.fi/problemset/task/1083/
//
// Well, basically we can use a summation.
// n(n+1)/2 
// 1 to n.
//

#include <iostream>

int main() {
	size_t n;
	std::cin >> n;
	size_t arr[n];

	for(size_t i = 1; i < n; ++i) {
		std::cin >> arr[i];
	}

	size_t total = n*(n+1)/2;
	for(size_t i = 1; i < n; ++i) {
		// To find the missing number, just substract each number.
		total -= arr[i];
	}
	std::cout << total;

	return 0;
}
