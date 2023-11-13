#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, L;
	cin >> N >> L;
	vector<int> h;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		h.push_back(temp);
	}

	sort(h.begin(), h.end());

	for (int i = 0; i < N; i++) {
		if (h[i] <= L) {
			L++;
		}
	}
	cout << L;

}