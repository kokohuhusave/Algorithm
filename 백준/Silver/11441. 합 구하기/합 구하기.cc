#include <vector>
#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, start_no, end_no;
	int sum = 0;
	cin >> N;

	vector<int> A(N, 0);
	int S[100001] = {};
	;
	for (int i = 1; i <= N; i++)
	{
		int temp;
		cin >> temp;
		S[i] = S[i - 1] + temp;
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> start_no >> end_no;
		sum = S[end_no] - S[start_no - 1];
		cout << sum << "\n";
	}
}