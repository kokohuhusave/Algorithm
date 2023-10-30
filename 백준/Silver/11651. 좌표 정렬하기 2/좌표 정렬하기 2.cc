#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int>a, pair<int, int>b)
{
	if (a.second == b.second) {
		return a.first < b.first;
	}

	else {
		return a.second < b.second;
	}
}

int main()
{
	int n, x, y;

	cin >> n;
	vector<pair<int, int>> vec(n);
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		vec[i].first = x;
		vec[i].second = y;
	}

	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", vec[i].first, vec[i].second);
	}

	return 0;
}