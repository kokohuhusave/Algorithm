#include <iostream>
#include <vector>
#define MAX 9
using namespace std;
int N, M;           
int sequence[MAX];  
bool visited[MAX];  
void dfs(int cnt);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M; // N = 2 M = 2
	dfs(0);
}

void dfs(int cnt) // cnt = 0
{
	if (cnt == M){
		for (int i = 0; i < M; i++) cout << sequence[i] << " ";
			cout << "\n";
			return;
		
		
	}
	else {
		for (int i = 1; i <= N; i++) {
			if (visited[i] == false) {
				sequence[cnt] = i;
				dfs(cnt + 1);
				visited[i] = false;

			}
		}
	}
}