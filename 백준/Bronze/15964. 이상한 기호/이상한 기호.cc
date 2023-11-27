#include<iostream>
#include<string>
using namespace std;

int main() {
    long N, M;
    cin >> N >> M;

    long sum = (N + M) * (N - M);

    cout << sum;

}