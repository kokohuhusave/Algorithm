#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int i, int j)
{
	return j < i;
}

int main()
{
	int sum = 0;
	int N;
	cin >> N;
	vector<int> A(N, 0);
	vector<int> B(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), compare);

	for (int i = 0; i < N; i++) {
		sum += A[i] * B[i];
	}
	cout << sum;
	
}