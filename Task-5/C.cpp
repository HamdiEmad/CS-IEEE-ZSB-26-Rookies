#include <iostream>
#include <climits>
using namespace std;

int main()
{
    short n;
    cin >> n;
    long long arr[n];
    long long sum = 0;
    for (short i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    long long ans = LLONG_MAX;
    for (int i = 0; i < (1 << n); i++)
    {
        long long curr = 0;
        for (short j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                curr += arr[j];
            }
        }
        long long sum2 = sum - curr;
        ans = min(ans, llabs(curr - sum2));
    }
    cout << ans << endl;
    return 0;
}