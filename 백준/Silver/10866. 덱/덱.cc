#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, M;
	deque<int> myDeque;
	string ans;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> ans;
		if (ans == "push_front") {
			cin >> M;
			myDeque.push_front(M);
		}
		else if (ans == "push_back") {
			cin >> M;
			myDeque.push_back(M);
		}
		else if (ans == "pop_front") {
			if (myDeque.empty()) cout << -1 << '\n';
			else {
				cout << myDeque.front() << '\n';
				myDeque.pop_front();
			}
		}
		else if (ans == "pop_back") {
			if (myDeque.empty()) cout << -1 << '\n';
			else {
				cout << myDeque.back() << '\n';
				myDeque.pop_back();
			}
		}
		else if (ans == "size") {
			cout << myDeque.size() << '\n';
		}
		else if (ans == "empty") {
			cout << myDeque.empty() << '\n';
		}
		else if (ans == "front") {
			if (myDeque.empty()) cout << -1 << '\n';
			else cout << myDeque.front() << '\n';
		}
		else if (ans == "back") {
			if (myDeque.empty()) cout << -1 << '\n';
			else cout << myDeque.back() << '\n';
		}
	}

	return 0;
}