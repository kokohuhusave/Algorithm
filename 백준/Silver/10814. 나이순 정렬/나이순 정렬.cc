#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool comp(pair<int, string>a, pair<int, string>b)
{
	return a.first < b.first;
}
int main(void)
{
	int N;
	cin >> N;

	pair<int, string>tmp;
	vector<pair<int, string>>arr;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp.first >> tmp.second;
		arr.push_back(tmp);
	}

	stable_sort(arr.begin(), arr.end(), comp);

	for (int i = 0; i < arr.size(); i++)
		cout << arr.at(i).first << ' ' << arr.at(i).second << '\n';

	return 0;
}