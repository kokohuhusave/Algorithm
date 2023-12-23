#include <iostream>
#include <vector>
#include <queue>

using namespace std;

static vector<int> a[101];
static int rs[101][101];
static queue<int> myqueue;

void bfs(int start) {
    int visited[101] = { 0, };
    myqueue.push(start);
    visited[start] = 1;
    while (!myqueue.empty()) {
        int x = myqueue.front();
        myqueue.pop();
        for (int i = 0; i < a[x].size(); i++) {
            int index = a[x][i];
            if (visited[index] == 0) {
                visited[index] = 1;
                myqueue.push(index);
                rs[index][start] = rs[x][start] + 1;
                rs[start][index] = rs[start][x] + 1;
                
            }
        }
    }
}

int main()
{
    int n, m; cin >> n >> m;
    int x, y;
    int sum = 0, result = 0, min = 2000000000;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            rs[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++)
        bfs(i);

    for (int i = 1; i <= n; i++) {
        sum = 0;
        for (int j = 1; j <= n; j++) {
            sum += rs[i][j];
        }
        if (min > sum) {
            min = sum;
            result = i;
        }
    }

    cout << result << "\n";

    return 0;
}
