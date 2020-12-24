// https://cses.fi/problemset/task/1071
// Time: 1 day.
// Explanation: https://codegolf.stackexchange.com/questions/170794/number-spiral-problem
// I used MATL, 15 bytes.
// Only a little change:
// even = v + y - x
// odd  = v - y + x

#include <iostream>
#include <algorithm>

int main() {
	size_t t,x,y;
	std::cin >> t;

	while(t--) {
		std::cin >> y >> x;

		size_t n = std::max(y,x);
		size_t v = n*(n-1)+1;	

		if(n % 2) {
			std::cout << v - y + x << '\n';
		} else {
			std::cout << v + y - x << '\n';
		}
	}

	return 0;
}
