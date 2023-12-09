#include <iostream>
using namespace std;
int main() {
    int student, apple, num, sum = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> student >> apple;
        sum += apple%student;
    }
    cout << sum << '\n';
}