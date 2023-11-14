#include <iostream>
using namespace std;
int main()
{
	int N;
	int turn = 0;

	cin >> N;
	while (N != 0) {
		if (N >= 3) {
			N -= 3;
			turn++;
		}
		else {
			N -= 1;
			turn++;
		}
	}
	if (turn % 2 == 0) {
		cout << "CY";
	}
	else {
		cout << "SK";
	}
}