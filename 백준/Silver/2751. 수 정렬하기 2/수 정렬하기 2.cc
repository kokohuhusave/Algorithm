#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int temp;
	int N, K;
	cin >> N;
	vector<int> A;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		A.push_back(temp);
	}

	sort(A.begin(), A.end());

	for (int i = 0; i < N; i++) {
		cout <<  A[i] << "\n";
	}
}