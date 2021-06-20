#include <iostream>
#include <vector>

std::vector<int> subset;
// Search begin when function is called with parameter 1.
void search(int k, int n) {
	if(k == n+1) {
		// Process subset.
		for(auto e : subset) {
			std::cout << e << " ";
		}
		std::cout << '\n';
	} else {
		// Include k in the subset.
		subset.push_back(k);
		search(k+1, n);
		subset.pop_back();
		search(k+1, n);
	}
}

int main() {
	size_t n;
	std::cin >> n;
	search(1, n);

	return 0;
}
