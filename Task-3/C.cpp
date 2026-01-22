#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    long long heads[N];
    long long bodies[M];
    for (int i = 0; i < N; ++i)
    {
        cin >> heads[i];
    }
    for (int i = 0; i < M; ++i)
    {
        cin >> bodies[i];
    }
    sort(heads, heads + N);
    sort(bodies, bodies + M);
    int i = 0, j = 0, count = 0;
    while (i < N && j < M)
    {
        if (heads[i] <= bodies[j])
        {
            count++;
            i++;
            j++;
            if (count == K)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
        else
        {
            j++;
        }
    }
    cout << "No" << endl;
    return 0;
}