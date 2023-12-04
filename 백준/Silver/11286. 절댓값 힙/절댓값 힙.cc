#include <iostream>
#include <queue>
using namespace std;

struct compare {
	bool operator()(int n1, int n2) {
		int first_abs = abs(n1);
		int second_abs = abs(n2);
		if (first_abs == second_abs) {
			return n1 > n2; //절대값이 같은 경우 음수 우선 정렬
		}
		else {
			return first_abs > second_abs; // 절대값을 기준으로 정렬
		}
	}
};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<int, vector<int>, compare> myqueue;

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int req;
		cin >> req;

		if (req == 0) {
			if (myqueue.empty()) {
				cout << "0\n";
			}
			else {
				cout << myqueue.top() << "\n";
				myqueue.pop();
			}
		}
		else {
			myqueue.push(req);
		}
	}
}