#include <iostream>
#include <vector>
using namespace std;

int N, M, ans;
static vector<vector <int>> A(101);
static vector<int> visited(101);
void DFS(int start,int end, int num);

void DFS(int start, int end, int num) {
	visited[start] = 1;
	if (start == end) {
		ans = num;
	}
	for (int i = 0; i < A[start].size(); i++) {
		int next = A[start][i];
		if (!visited[next]) {
			DFS(next, end, num + 1);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, M,start_pi, end_pi;
	cin >> N >> start_pi >> end_pi >> M;

	
	for (int i = 0; i < M; i++) {
		int s, e;
		cin >> s >> e;
		A[s].push_back(e);
		A[e].push_back(s);
	}

	DFS(start_pi, end_pi, 0);
	if (ans != 0) {
		cout << ans;
	}
	else {
		cout << "-1";
	}
}