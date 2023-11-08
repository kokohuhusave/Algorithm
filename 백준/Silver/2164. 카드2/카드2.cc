#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> myQueue;
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		myQueue.push(i);
	}
	while (myQueue.size() > 1) {
		myQueue.pop();
		myQueue.push(myQueue.front());
		myQueue.pop();
	}
	cout << myQueue.front();
}