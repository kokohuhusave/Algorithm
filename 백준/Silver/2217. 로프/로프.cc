#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> A;
	vector<int> sum(N+1, 0);

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		A.push_back(temp);
	}

	sort(A.begin(), A.end(), greater<>());

	int result = 0;

	for (int i = 0; i < A.size(); i++) {
		sum[i] = A[i] * (i + 1);
	}
	sort(sum.begin(), sum.end());

	cout << sum[N] << "\n";
}