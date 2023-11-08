#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int sum = 0;
	int M;
	cin >> M;
	vector<int> A(M, 0);


	for (int i = 0; i < M; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	int time = 0, tmp = 0;
	for (int i = 0; i < A.size(); i++) {
		tmp += A[i];
		time += tmp;
	}
	cout << time << "\n";
	
}