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

	queue<int> A;

	cout << "<";
	
	for(int i = 1; i <= N; i++) {
		A.push(i);
	}

	while (A.size() > 1) {
		for (int i = 0; i < K - 1; i++) {
			int temp = A.front();
			A.pop();
			A.push(temp);
		}
		cout << A.front() << ", ";
		A.pop();
	}
	cout << A.front() << ">";
}