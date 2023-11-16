#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int arr[10] = { 0, };

	cin >> N;	
	for (int j = 0; j < N; j++) {
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + 10);

		cout << arr[7] << endl;
	}

	return 0;
}
