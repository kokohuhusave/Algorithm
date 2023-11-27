#include<iostream>
using namespace std;

int main() {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    int sum = (A * A) + (B * B) + (C * C) + (D * D) + (E * E);

    cout << sum % 10;

}