#include <iostream>

using namespace std;

int main() {

    int N, M;
    int A[101] = { 0, };
    int a, b, c;

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        cin >> a >> b >> c;
        for (int k = a; k <= b; k++) {
            A[k] = c;
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << A[i] << ' ';
    }

    return 0;
}