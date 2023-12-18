#include <iostream>
#define MAX 9
using namespace std;
int N, M;           
int sequence[MAX];  
bool visited[MAX];  
void dfs(int cnt);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    dfs(0);
}

void dfs(int cnt) {
    if (cnt == M) 
    {
        for (int index = 0; index < M; index++) cout << sequence[index] << ' ';
        cout << '\n';
        return;
    }
    else {
        for (int index = 1; index <= N; index++) {
            if (visited[index] == false) {
                visited[index] = true;
                sequence[cnt] = index;
                dfs(cnt + 1);
                visited[index] = false;
            }
        }
    }
}
