#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
int main() {
    string N;


    while (N != "0") {
        cin >> N;
        string M = N;
        reverse(N.begin(), N.end()); 
        if (N == "0") { 
            break;
        }
        else if (N == M) { 
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }
}
