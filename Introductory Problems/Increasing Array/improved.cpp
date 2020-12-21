#include <iostream>

using namespace std;

int main() {
	size_t n;
	cin >> n;
	int arr[n];

	size_t turns = 0;
	for(size_t i = 0; i < n; ++i) {
		cin >> arr[i];
		// Only apply this when there is a second element in the array.
		if(i) {
			if(arr[i] < arr[i-1]) {
				turns += arr[i-1] - arr[i];
				arr[i] = arr[i-1];
			}
		}
	}
	cout << turns << '\n';
}
