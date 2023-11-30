#include <vector>
#include <iostream>
using namespace std;
int main()
{
	int K;
	cin >> K;

	vector<long> A(46);
	vector<long> B(46);

	A[0] = 1;
	B[0] = 0;
	A[1] = 0;
	B[1] = 1;
	A[2] = 1;
	B[2] = 1;
	A[3] = 1;
	B[3] = 2;
	A[4] = 2;
	B[4] = 3;
	A[5] = 3;
	B[5] = 5;

	for (int i = 6; i <= K; i++) {
		A[i] = A[i - 2] + A[i - 1];
		B[i] = B[i - 2] + B[i - 1];
	}

	cout << A[K] << " " << B[K];
}