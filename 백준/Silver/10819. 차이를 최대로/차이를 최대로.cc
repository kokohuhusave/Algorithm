#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int result = 0;
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    do {
        int sum = 0;
        for (int i = 0; i < N - 1; i++) {
            sum += abs(A[i] - A[i + 1]);
        }
        result = max(result, sum);
    } while (next_permutation(A.begin(), A.end()));

    cout << result;

    return 0;
}
