#include <iostream>
#include <algorithm>
using namespace std;

int gcd(long a, long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long N, M;
	cin >> N >> M;
	long result = gcd(N, M);
	
	while (result > 0) {
		cout << 1;
		result--;
	}
	cout << "\n";
}