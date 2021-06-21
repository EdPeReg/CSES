#include <iostream>

using namespace std;

int main() {
    long long N;
    cin >> N;

    for(long long i = 1; i <= N; ++i) {
        long long total_positions = (i*i) * (i*i - 1) / 2;
        long long attack_positions = 4*(i-1) * (i-2);
        cout << total_positions - attack_positions << '\n';
    }
}
