#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;
    int cnt1 = 0;

    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;

        int cnt = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                cnt++;
            }
        }
        if (cnt == 2) {
            cnt1++;
        }
    }
    cout << cnt1;
    return 0;
}
