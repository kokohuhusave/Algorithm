#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> A(3, 0);
	for (int i = 0; i < 3; i++) {
		cin >> A[i];
	}
	sort(A.begin(), A.end());

	cout <<  A[1];
	
}