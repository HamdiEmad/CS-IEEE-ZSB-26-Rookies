#include <iostream>
using namespace std;

int main()
{
    short t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int total[n + 1] = {0};
        for (int i : arr)
            total[i]++;
        bool ok = true;
        int need[n + 1] = {0};
        for (int v = 1; v <= n; v++)
        {
            if (total[v] % k != 0)
            {
                ok = false;
                break;
            }
            need[v] = total[v] / k;
        }
        if (!ok)
        {
            cout << 0 << endl;
            continue;
        }
        int count[n + 1] = {0};
        int l = 0, bad = 0;
        long long ans = 0;
        for (int r = 0; r < n; r++)
        {
            int val = arr[r];
            count[val]++;
            if (count[val] == need[val] + 1)
            {
                bad++;
            }
            while (bad > 0)
            {
                int y = arr[l];
                count[y]--;
                if (count[y] == need[y])
                {
                    bad--;
                }
                l++;
            }
            ans += (r - l + 1);
        }
        cout << ans << endl;
    }
}