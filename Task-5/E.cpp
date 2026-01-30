#include <iostream>
using namespace std;

int main()
{
    short t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }
        if ((a ^ b) <= a)
        {
            cout << 1 << endl;
            cout << (a ^ b) << endl;
            continue;
        }
        int msb_a = 0;
        for (int i = 60; i >= 0; i--)
        {
            if ((a >> i) & 1)
            {
                msb_a = i;
                break;
            }
        }
        if (b >= (1LL << (msb_a + 1)))
        {
            cout << -1 << endl;
            continue;
        }
        long long x1 = (1LL << msb_a) - 1;
        long long x2 = a ^ x1;
        if (x2 ^ b <= x2)
        {
            cout << 2 << endl;
            cout << x1 << " " << (x2 ^ b) << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}