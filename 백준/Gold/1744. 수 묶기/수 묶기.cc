#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	
	int N;
	cin >> N;

	priority_queue<int> pluspd;
	priority_queue<int, vector<int>, greater<int>> minuspd;
	int ones = 0;
	int zeros = 0;
	int sum = 0;

	for (int i = 0; i < N; i++) {
		int data;
		cin >> data;
		if (data > 1) {
			pluspd.push(data);
		}
		else if (data < 0) {
			minuspd.push(data);
		}
		else if (data == 1) {
			ones++;
		}
		else if(data == 0) {
			zeros++;
		}
	}
	
	while (pluspd.size() > 1) {
		int first = pluspd.top();
		pluspd.pop();
		int second = pluspd.top();
		pluspd.pop();
		sum = sum + first * second;
	}
	if (!pluspd.empty()) {
		sum = sum + pluspd.top();
		pluspd.pop();
	}

	while (minuspd.size() > 1) {
		int first = minuspd.top();
		minuspd.pop();
		int second = minuspd.top();
		minuspd.pop();
		sum = sum + first * second;
	}
	if (!minuspd.empty()) {
		if (zeros == 0) {
			sum = sum + minuspd.top();
			minuspd.pop();
		}
	}

	sum = sum + ones;
	cout << sum;
}