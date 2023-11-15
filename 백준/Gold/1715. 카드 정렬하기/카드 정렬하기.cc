#include <vector>
#include <iostream>
#include <queue>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> A;
	vector<int> B;

	int N;
	cin >> N;
	priority_queue<int, vector<int>, greater<int>> pd;
	int data;

	for (int i = 0; i < N; i++) {
		cin >> data;
		pd.push(data);
	}

	int data1 = 0;
	int data2 = 0;
	int sum = 0;

	while (pd.size() != 1) {
		data1 = pd.top();
		pd.pop();
		data2 = pd.top();
		pd.pop();
		sum += data1 + data2;
		pd.push(data1 + data2);
	}
	cout << sum << "\n";
}