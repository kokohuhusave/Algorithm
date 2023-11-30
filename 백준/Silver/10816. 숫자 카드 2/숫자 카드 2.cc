#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N;
    int* arr = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    cin >> M;
    int* arr2 = new int[M];

    for (int i = 0; i < M; i++) {
        cin >> arr2[i];
    }

    int count, prev = -1;
    for (int i = 0; i < M; i++) {
        count = upper_bound(arr, arr + N, arr2[i]) - lower_bound(arr, arr + N, arr2[i]);
        cout << count << " ";
    }

    delete[] arr;
    delete[] arr2;

    return 0;
}