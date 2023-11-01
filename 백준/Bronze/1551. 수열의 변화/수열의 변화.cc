#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (i != N - 1) getchar();  // 숫자 사이의 ','를 건너뛰기 위함
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N - 1; j++) {
            A[j] = A[j + 1] - A[j];
        }
        N--;
    }

    for (int i = 0; i < N - 1; i++) {
        cout << A[i] << ",";
    }
    cout << A[N - 1] << endl;

    return 0;
}
