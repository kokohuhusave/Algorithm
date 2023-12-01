
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	stack<int> myStack;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		myStack.push(temp);
		if (myStack.top() == 0) {
			myStack.pop();
			myStack.pop();
		}
		
	}

	long long sum = 0;
	int size = myStack.size();
	for (int i = 0; i < size; i++) {
		sum += myStack.top();
		myStack.pop();
	}

	cout << sum << "\n";
}