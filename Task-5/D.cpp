#include <iostream>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    long long arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    long long prefixSum[n + 1];
    prefixSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] xor arr[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << (prefixSum[r] xor prefixSum[l - 1]) << endl;
    }
}