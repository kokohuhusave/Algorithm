#include <iostream>
#include <vector>
using namespace std;

bool map[101][101];

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);



	int x1, x2, y1, y2;
	
	for (int i = 0; i < 4; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1; j < x2; j++) {
			for (int k = y1; k < y2; k++) {
				map[j][k] = true;
				
			}
		}
	}

	int result = 0;
	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			if (map[i][j])
			{
				result++;
			}
		}
	}
	cout << result;
}