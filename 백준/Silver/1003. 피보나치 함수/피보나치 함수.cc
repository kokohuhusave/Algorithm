#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int dp[41] = { 0,1,1 };
	for (int i = 3; i < 41; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	cin >> N;
	for (int i = 0; i < N; i++) {
		int M;
		cin >> M;
		if (M == 0) {
			cout << 1 << " " << 0 << "\n";
		}
		else if (M == 1) {
			cout << 0 << " " << 1 << "\n";
		}
		else {
			cout << dp[M - 1] << " " << dp[M] << "\n";
		}
	}
}