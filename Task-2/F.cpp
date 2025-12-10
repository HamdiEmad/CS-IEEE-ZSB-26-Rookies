#include <iostream>
#include <vector>
using namespace std;

long long degrees[2000000] = {0};

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        degrees[l]++;
        degrees[r + 1]--;
    }
    for (int i = 1; i < 2000000; i++)
    {
        degrees[i] += degrees[i - 1];
    }
    for (int i = 0; i < 2000000; i++)
    {
        degrees[i] = (degrees[i] >= k) ? 1 : 0;
    }
    for (int i = 1; i < 2000000; i++)
    {
        degrees[i] += degrees[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << degrees[b] - degrees[a - 1] << "\n";
    }
}