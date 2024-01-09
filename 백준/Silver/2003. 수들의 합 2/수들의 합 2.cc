#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	vector<int> A(N + 1);
	
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int start = 0;
	int end = 0;
	int sum = A[0];
	int count = 0;

	while (end < N) {
		if (sum < M) {
			end++;
			if (end < N)
				sum += A[end];
		}
			else if (sum > M) {
				sum -= A[start];
				start++;
			}
			else if (sum == M) {
				sum -= A[start];
				start++;
				end++;
				if (end < N) 
					sum += A[end];
				
				count++;
			}
		}
	cout << count << "\n";
}