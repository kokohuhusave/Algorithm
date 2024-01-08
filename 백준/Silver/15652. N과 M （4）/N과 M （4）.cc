#include <iostream>
#define MAX 9
using namespace std;

int n, m;
int arr[MAX];
bool visited[MAX];

void dfs(int num,int cnt) // 1 0
{
    if (cnt == m)  // m = 2
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    else {
        for (int i = num; i <= n; i++) // n = 4
        {
            visited[i] = true;
            arr[cnt] = i;
            dfs(i, cnt + 1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m; // 4 2
    dfs(1, 0);
}