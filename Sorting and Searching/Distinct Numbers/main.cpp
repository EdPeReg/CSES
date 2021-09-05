// 11:14

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, c = 1;
    std::cin >> n;
    std::vector<int> v(n);

    for(size_t i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());

    for(size_t i = 1; i < n; ++i) 
        // True = 1, false = 0, everytime that expression returns
        // true, we will increment by one our counter.
        c += (v[i] != v[i-1]);

    std::cout << c;

    return 0;
}
