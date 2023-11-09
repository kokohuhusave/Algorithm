#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int> A;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		A.push_back(temp);
	}

	int count = 0;

	for (int i = N - 1; i >= 0; i--) {
		if (A[i] <= M) {
			count += (M / A[i]);
			M = M % A[i];
		}
	}
	cout << count << "\n";
}