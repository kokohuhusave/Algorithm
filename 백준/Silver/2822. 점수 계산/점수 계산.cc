#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int>A(9);
	vector<int>D(9);

	for (int i = 0; i < 8; i++) {
		cin >> A[i];
		D[i] = A[i];
	}

	sort(A.begin(), A.end(), greater<>());

	int sum = 0;

	for(int i = 0; i < 5; i++) {
		sum += A[i];
	}

	cout << sum << "\n";
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 5; j++) {
			if (D[i] == A[j]) {
				cout << i + 1 << " ";
			}
		}
	}
}