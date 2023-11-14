#include <iostream>
using namespace std;

int n = 0;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void dfs(int number, int len) {
    if (len == n) {
        if (isPrime(number)) {
            cout << number << "\n";
        }
        return;
    }

    for (int i = 1; i <= 9; i++) {
        if (isPrime(number * 10 + i)) {
            dfs(number * 10 + i, len + 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    dfs(2, 1);
    dfs(3, 1);
    dfs(5, 1);
    dfs(7, 1);
    return 0;
}
