#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int count = 0;
	int N;
	cin >> N;
	
	for (int i = 5; i <= N; i *= 5) {
		count += N / i;
	}
	cout << count;
}