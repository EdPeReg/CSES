#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    long long aux = 1;
    long long sum = 0;
    for(int i = 0; i < n; ++i) {
        sum += aux;
        aux *= 2;
    }

    std::cout << sum + 1<< '\n';
}
