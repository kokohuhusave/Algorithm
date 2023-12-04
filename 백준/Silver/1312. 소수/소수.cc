
#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int A, B, C;
	int N;

	cin >> A >> B >> N;
	while (N--) {
		A %= B;
		A *= 10;
		C = A / B;
	}
	cout << C << "\n";
}
