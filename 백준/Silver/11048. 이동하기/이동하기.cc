#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	vector<vector<int>>arr(N + 1, vector<int>(M + 1, 0));
	vector<vector<int>>dp(N + 1, vector<int>(M + 1, 0));
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> arr[i][j];
			dp[i][j] = arr[i][j];
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			dp[i][j] = arr[i][j] + max(dp[i - 1][j - 1], max(dp[i - 1][j], dp[i][j - 1]));
		}
	}

	cout << dp[N][M] << '\n';
}