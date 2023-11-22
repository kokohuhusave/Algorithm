#include<iostream>
#include <vector>
using namespace std;

static vector<vector <int>> A;		// 그래프 데이터 저장 인접 리스트
static vector<bool> visited;		// 방문 기록 저장 배열
static bool arrive;					// 도착 확인 변수
void DFS(int now, int depth);	

void DFS(int now, int depth) {
	if (depth == 5 || arrive) {		// 깊이가 5가 되면 종료
		arrive = true;
		return;
	}
	visited[now] = true;

	for (int i : A[now]) {			// visited 배열에 현재 노드 방문 기록
		if (!visited[i]) {			//현재 노드의 연결 노드 중 방문하지 않는노드에 대해 DFS(호출마다 깊이는 1씩 증가)
			DFS(i, depth + 1);		// 재귀 호출시 depth를 1씩 증가하여 호출하기
		}
	}
	visited[now] = false;			// visited 배열에 현재 노드 방문 삭제
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	arrive = false;
	cin >> N >> M;
	A.resize(N);					
	visited = vector<bool>(N, false);

	for (int i = 0; i < M; i++) {	// 인접 리스트 A에 그래프 데이터 저장
		int s, e;
		cin >> s >> e;
		A[s].push_back(e);
		A[e].push_back(s);
	}

	for (int i = 0; i < N; i++) {
		DFS(i, 1);					// 노드마다 DFS 실행
		if (arrive) {
			break;					// 깊이가 5에 도달한적이 있다면 반복문 종료
		}
	}
	
	if (arrive) {
		cout << 1 << "\n";
	}
	else {
		cout << 0 << "\n";
	}
}
