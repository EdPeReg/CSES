#include <iostream>
#include <cmath>

int main() {
	int n;
	std::cin >> n;

	for(int i = 1; i <= n; ++i) {
		size_t result = (pow(i,2)*(pow(i,2)-1)/2) - (4*(i-1)*(i-2));
		std::cout << result << '\n';
	}

	return 0;
}
