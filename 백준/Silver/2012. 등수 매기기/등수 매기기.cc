#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin >> N;

	vector<int> A(N + 1);

	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	long long sum = 0;

	for (int j = 1; j <= N; j++) {
		sum += abs(j - A[j]);
	}
	cout << sum << "\n";
}