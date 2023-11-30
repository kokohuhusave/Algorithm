#include<iostream>
#include<queue>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	priority_queue<int> myqueue;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;

		if (temp == 0) {
			if (myqueue.empty()) {
				cout << 0 << "\n";
			}
			else {
				cout << myqueue.top() << "\n";
				myqueue.pop();
			}
		}
		else {
			myqueue.push(temp);
		}
	}

	return 0;
}