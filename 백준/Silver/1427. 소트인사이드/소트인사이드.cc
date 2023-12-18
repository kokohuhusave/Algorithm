#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;
	vector<int> A(str.size(), 0);

	for (int i = 0; i < str.size(); i++) {
		A[i] = stoi(str.substr(i, 1));
	}
	
	sort(A.begin(), A.end());

	for (int i = str.size() - 1; i >= 0; i--) {
		cout << A[i];
	}
}