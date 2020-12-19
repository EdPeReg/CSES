#include <iostream>
#include <algorithm>

int main() {
	std::string dna;
	std::cin >> dna;

	int count = 0, aux = 0;
	for(size_t i = 1; i < dna.size(); ++i) {
		if(dna.at(i) == dna.at(i-1)) {
			++aux;
			count = std::max(count,aux);
		} else {
			aux = 0;
		}
	}
	std::cout << count+1;
}
