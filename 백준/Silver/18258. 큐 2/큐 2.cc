
#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	long N, X;
	queue<int> myQueue;
	string op;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> op;
		if (op == "push") {
			cin >> X;
			myQueue.push(X);
		}
		else if (op == "pop") {
			if (myQueue.empty()) cout << -1 << '\n';
			else {
				cout << myQueue.front() << '\n';
				myQueue.pop();
			}
		}
		else if (op == "size") {
			cout << myQueue.size() << '\n';
		}
		else if (op == "empty") {
			cout << myQueue.empty() << '\n';
		}
		else if (op == "front") {
			if (myQueue.empty())
				cout << -1 << '\n';
			else
				cout << myQueue.front() << '\n';
		}
		else if (op == "back") {
			if (myQueue.empty())
				cout << -1 << '\n';
			else
				cout << myQueue.back() << '\n';
		}
	}

	return 0;
}