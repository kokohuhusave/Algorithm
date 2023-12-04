#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int> A;
	long N;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		A.push_back(temp);
	}

	sort(A.begin(), A.end());

	for(int i = N-1; i < A.size(); i--) {
		cout << A[i] << "\n";
	}

}
