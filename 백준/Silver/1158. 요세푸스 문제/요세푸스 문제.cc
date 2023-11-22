#include <iostream>
#include <queue>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	queue<int> myQueue;

	for (int i = 1; i <= N; i++) {
		myQueue.push(i);
	}
	cout << "<";

	while (myQueue.size() > 1) {
		for (int i = 0; i < K-1; i++) {
			int temp = myQueue.front();
			myQueue.pop();
			myQueue.push(temp);
		}
		cout << myQueue.front() << ", ";
		myQueue.pop();
	}
	cout << myQueue.front() << ">\n";
}