#include <iostream>
using namespace std;

int main()
{
    int n;
    long long t;
    cin >> n >> t;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, ans = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        while (sum > t)
        {
            sum -= arr[l];
            l++;
        }
        ans = max(ans, i - l + 1);
    }
    cout << ans << endl;
    return 0;
}