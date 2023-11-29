#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<long long> A(91);
	A[0] = 0;
	A[1] = 1;
	A[2] = 1;
	A[3] = 2;

	for (int i = 4; i <= N; i++) {
		A[i] = A[i - 1] + A[i - 2];
	}

	cout << A[N] << "\n";
}