// 1:45:58
// UNFORTUNATELLY I COULDN'T UNDERSTAND VERY WELL THIS PROBLEM.
// I NEED TO PRACTICE MORE DP.

#include <iostream>
#include <vector>

int main() {
    unsigned long mod = 10e9 + 7;
    int n;
    std::cin >> n;

    std::vector<int> comb(n+1, 0);
    comb[0] = 1;

    for(int i = 1; i <= n; ++i) 
        for(int j = 1; j <= 6; ++j)
            if(i - j >= 0)
                comb[i] = (comb[i] + comb[i-j]) % mod;
    
    std::cout << comb[n];

    return 0;
}
