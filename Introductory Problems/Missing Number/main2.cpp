// https://cses.fi/problemset/task/1083/
// Time: 12m.

#include <iostream>

using namespace std;

int main() {
    long long N, n;
    cin >> n;

    // Summ formula for 1 + 2 + 3 + 4 ..
    long long totalSum = n * (n+1) / 2;
    for(int i = 0; i < n - 1; ++i) {
        cin >> N;
        totalSum -= N;
    }

    cout << totalSum;
    return 0;
}
