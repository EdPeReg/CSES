// 25 min.

#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

    int counter = 1, max = 1;
    for(size_t i = 0; i < str.size() - 1; ++i) {
        if(str[i] == str[i+1]) {
            if(++counter > max)
                max = counter;
        } else {
            counter = 1;
        }
    }

    cout << max;

    return 0;
}
