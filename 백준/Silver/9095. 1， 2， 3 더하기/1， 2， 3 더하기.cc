#include<iostream>
using namespace std;

int M, N;
int A[12] = { 0, };

int main() {

	A[1] = 1;
	A[2] = 2;
	A[3] = 4;
	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> N;
		for (int i = 4; i <= N; i++) {
			A[i] = A[i - 1] + A[i - 2] + A[i - 3];
		}
		cout << A[N] << endl;
	}
	return 0;
}