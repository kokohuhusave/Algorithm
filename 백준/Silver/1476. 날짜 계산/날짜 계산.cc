#include <iostream>
using namespace std;
int main()
{
	int E, S, M;
	int count = 0;
	int RE = 0, RS = 0, RM = 0;
	cin >> E >> S >> M;
	
	
	while (1) {
		if (RE == 16) {
			RE = 1;
		}
		if (RS == 29) {
			RS = 1;
		}
		if (RM == 20) {
			RM = 1;
		}
		if (RE == E & RS == S & RM == M) {
			cout << count;
			break;
		}
		RE++;
		RS++;
		RM++;
		count++;
	}
}
