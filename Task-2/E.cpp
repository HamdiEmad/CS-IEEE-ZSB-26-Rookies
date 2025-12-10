#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    vector<long long> pref(n + 1), suff(n + 1);
    pref[0] = 0;
    suff[n] = 0;
    for (int i = 1; i <= n; i++)
    {
        pref[i] = gcd(pref[i - 1], nums[i - 1]);
        suff[n - i] = gcd(suff[n - i + 1], nums[n - i]);
    }
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, gcd(pref[i], suff[i + 1]));
    }
    cout << ans << endl;
}