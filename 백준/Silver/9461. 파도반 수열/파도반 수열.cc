#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int N;
	cin >> N;
	vector<long long> A(101);

	A[0] = 1;
	A[1] = 1;
	A[2] = 1;
	A[3] = 2;
	A[4] = 2;
	A[5] = 3;
	A[6] = 4;
	A[7] = 5;
	A[8] = 7;
	A[9] = 9;
	A[10] = 12;
	//1, 1, 1, 2, 2, 3, 4, 5, 7, 9
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		for (int i = 6; i <= temp; i++) {
			A[i] = A[i - 1] + A[i - 5];
		}
		cout << A[temp-1] << "\n";
	}
}