#include <iostream>
#define MAX 9
using namespace std;
int N;           
int sequence[MAX];  
bool visited[MAX];  
void dfs(int cnt);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N; // 4 2
    dfs(0);
}

void dfs(int cnt) {
    if (cnt == N) // 초기 0 2
    {
        for (int i = 0; i < N; i++) cout << sequence[i] << ' ';
        cout << '\n';
        return;
    }
    else {
        for (int i = 1; i <= N; i++) { // 4
            if (visited[i] == false) {
                visited[i] = true;
                sequence[cnt] = i;
                dfs(cnt + 1);
                visited[i] = false;
            }
        }
    }
}
