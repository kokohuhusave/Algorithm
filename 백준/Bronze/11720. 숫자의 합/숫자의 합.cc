#include <iostream>
using namespace std;
int main()
{
    int N;
	string numbers;
	int sum = 0;
	cin >> N >> numbers;

	for (int i = 0; i < numbers.length(); i++) {
		sum += numbers[i] - '0';
	}
	cout << sum;
}