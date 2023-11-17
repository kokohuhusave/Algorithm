#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N;
	int cnt = 0;
	cin >> N;
	while (N >= 0) {
		if (N % 5 == 0) {
			cnt += N / 5;
			cout << cnt;
			return 0;
		}
		N -= 3;
		cnt++;
	}
	cout << -1;
}