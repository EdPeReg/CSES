// 11:14

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, c = 1;
    std::cin >> n;
    std::vector<int> v(n,0);

    for(size_t i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());

    for(size_t i = 1; i < n; ++i) 
    {
        if(v[i] != v[i-1]) 
            ++c;
    }

    std::cout << c;

    return 0;
}
