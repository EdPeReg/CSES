#include <iostream>

int main() {
    unsigned long long n;
    std::cin >> n;

    unsigned long long answer = 1;
    for(unsigned long long i = 0; i < n; ++i) {
        answer = (answer * 2) % ((long long) 1e9 + 7);
    }

    std::cout << answer << '\n';

    return 0;
}
