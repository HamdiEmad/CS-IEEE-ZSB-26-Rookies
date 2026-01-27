#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int candies[n];
        for (int i = 0; i < n; i++)
        {
            cin >> candies[i];
        }
        int l = 0, r = n - 1, alice_wieght = 0, bob_weight = 0, alice = 0, bob = 0, ans = 0;
        while (l <= r)
        {
            if (alice_wieght <= bob_weight)
            {
                alice_wieght += candies[l++];
                alice++;
            }
            else
            {
                bob_weight += candies[r--];
                bob++;
            }
            if (alice_wieght == bob_weight)
                ans = max(ans, alice + bob);
        }
        cout << ans << endl;
    }
}