#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long t;
    cin >> n >> t;
    long long machines[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> machines[i];
    }
    long long left = 0, right = (*min_element(machines, machines + n)) * t;
    while (left < right)
    {
        long long mid = left + (right - left) / 2;
        long long produced = 0;
        for (int i = 0; i < n; ++i)
        {
            produced += mid / machines[i];
            if (produced >= t)
                break;
        }
        if (produced >= t)
            right = mid;
        else
            left = mid + 1;
    }
    cout << left << endl;
}