#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, temp;
    vector<long long> v(1001, 0);       
    long long sum = 0, answer = 0;      

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        sum += temp;
        v[sum % M]++;                   
        if (sum % M == 0)
        {
            answer++;                  
        }
    }
    for (int i = 0; i <= M; i++)
    {
        answer += v[i] * (v[i] - 1) / 2;    
    }

    cout << answer;

    return 0;
}