#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> A(9);
    int sum = 0;


    for (int i = 0; i < 9; i++) {
        cin >> A[i];
        sum += A[i];
    }


    bool found = false;
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - A[i] - A[j] == 100) {
                A[i] = A[j] = -1; 
                found = true;
                break;
            }
        }
        if (found) break;
    }

    sort(A.begin(), A.end());

 
    for (int i = 0; i < 9; i++) {
        if (A[i] != -1) {
            cout << A[i] << "\n";
        }
    }

    return 0;
}
