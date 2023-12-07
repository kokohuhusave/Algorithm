#include<iostream>
using namespace std;
int main()
{
	int T, N, M;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int data1 = 1;
		int data2 = 1;
		cin >> N >> M; // 3 10
		for (int j = M; j > M - N; --j) {
			data1 = data1 * j;
			data1 = data1 / data2++;
		}
		cout << data1 << "\n";
	}
}