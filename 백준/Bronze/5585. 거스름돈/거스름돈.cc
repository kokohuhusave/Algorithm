#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M;
	cin >> M;
	M = 1000 - M;
	vector<int> A(6);

	A[0] = 1;
	A[1] = 5;
	A[2] = 10;
	A[3] = 50;
	A[4] = 100;
	A[5] = 500;

	int count = 0;

	for (int i = 5; i >= 0; i--) {
		if (A[i] <= M) {
			count += (M / A[i]);
			M = M % A[i];
		}
	}
	cout << count << "\n";
}