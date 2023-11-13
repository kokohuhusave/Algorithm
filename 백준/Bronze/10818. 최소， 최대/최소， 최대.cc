#include <iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;

	int iMin = 1000000;
	int iMax = -1000000;

	int* iArr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> iArr[i];

		if (iArr[i] < iMin)
		{
			iMin = iArr[i];
		}

		if (iArr[i] > iMax)
		{
			iMax = iArr[i];
		}
	}

	cout << iMin << " " << iMax << endl;
	/*
	if (iArr)
	{
		delete(iArr);
		iArr = nullptr;
	}
	*/
}