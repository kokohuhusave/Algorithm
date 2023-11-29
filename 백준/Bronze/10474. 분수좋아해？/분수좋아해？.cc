#include <iostream>
using namespace std;

int main() {
    int N, M;
    while (true) {
        cin >> N >> M;
        if (N == 0 || M == 0) {
            break;
        }
        cout << N / M << " " << N % M << " / " << M << "\n";
    }
    return 0;
}
