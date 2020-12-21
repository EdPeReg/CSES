#include <iostream>

using namespace std;

int main() {
	size_t n;
	cin >> n;
	int arr[n];

	for(size_t i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	size_t turns = 0;
	for(size_t i = 1; i < n; ++i) {
		if(arr[i] < arr[i-1]) {
			turns += arr[i-1] - arr[i];
			arr[i] = arr[i-1];
		}
	}
	cout << turns << '\n';
}
