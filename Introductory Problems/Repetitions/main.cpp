// https://cses.fi/problemset/task/1069
// Time 14:37m

#include <iostream>
#include <algorithm>

int main() {
	std::string dna;
	std::cin >> dna;

	int countA = std::count(dna.begin(), dna.end(), 'A');
	int countT = std::count(dna.begin(), dna.end(), 'T');
	int countC = std::count(dna.begin(), dna.end(), 'C');
	int countG = std::count(dna.begin(), dna.end(), 'G');
	
	std::cout << std::max({countA, countT, countC, countG});

	return 0;
}
