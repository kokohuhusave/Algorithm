#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long Max, Min;
	cin >> Min >> Max;
	vector<long> A(10000001);

	for (int i = 2; i < 10000001; i++) {
		A[i] = i;
	}
	for (int i = 2; i <= sqrt(10000001); i++) {		//제곱근까지 
		if (A[i] == 0) {
			continue;
		}
		for (int j = i * 2; j < 10000001; j = j + i) { // 배수 지우기
			A[j] = 0;
		}
	}

	int count = 0;

	for (int i = 2; i < 10000001; i++) {
		if (A[i] != 0) {
			long temp = A[i];// 현재 소수

			// 현재소수의 제곱근이 Max보다 작을 때 기준이지만
			// 곱셈이 long의 범위를 넘어갈 수 있어 이항정리로 처리
			while ((double)A[i] <= (double)Max / (double)temp) {
				if ((double)A[i] >= (double)Min / (double)temp) {
					count++;
				}
				temp = temp * A[i];
			}
		}
	}
	cout << count << "\n";
}