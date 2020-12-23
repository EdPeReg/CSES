// https://cses.fi/problemset/task/1071
// Time: 12m.

#include <iostream>

int main() {
	int grid[5][5] = {{1,2,9,10,25},
					  {4,3,8,11,24},
					  {5,6,7,12,23},
					  {16,15,14,13,22},
					  {17,18,19,20,21}};

	int t,x,y;
	std::cin >> t;

	while(t--) {
		std::cin >> x >> y;
		for(int i = 0; i < 5; ++i) {
			for(int j = 0; j < 5; ++j) {
				if(i+1 == x and j+1 == y) {
					std::cout << grid[i][j] << '\n';
					break;
				}
			}
		}
	}

	return 0;
}
