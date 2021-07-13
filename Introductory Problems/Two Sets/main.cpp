#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    long long n, target;
    vector<long long> v1, v2;
    cin >> n;

    target = n * (n+1) / 4;
    if((n * (n+1) / 2) % 2 == 0) 
    {
        cout << "YES" << '\n';
        for(long long i = n; i > 0; --i) 
        {
            if(target - i >= 0) 
            {
                v1.push_back(i);
                target -= i;
            } 
            else 
                v2.push_back(i);
        }

        cout << v1.size() << '\n';
        for(const long long& e : v1) 
        {
            cout << e << ' ';
        }

        cout << '\n' << v2.size() << '\n';
        for(const long long& e : v2) 
        {
            cout << e << ' ';
        }
    } 
    else 
    {
        cout << "NO\n";
    }

    return 0;
}
