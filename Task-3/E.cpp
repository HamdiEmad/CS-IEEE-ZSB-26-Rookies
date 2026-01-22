#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    long long cities[n], towers[m];
    for (int i = 0; i < n; ++i)
    {
        cin >> cities[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> towers[i];
    }
    long long right = 0;
    int j = 0;
    for (int i = 0; i < n; ++i)
    {
        while (j + 1 < m && abs(towers[j + 1] - cities[i]) <= abs(towers[j] - cities[i]))
        {
            j++;
        }
        right = max(right, abs(towers[j] - cities[i]));
    }
    cout << right << endl;
}