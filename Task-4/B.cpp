#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    short arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = n - 1;
    long long time_alice = 0, time_bob = 0;
    int alice = 0, bob = 0;
    while (l <= r)
    {
        if (time_alice <= time_bob)
        {
            time_alice += arr[l];
            alice++;
            l++;
        }
        else
        {
            time_bob += arr[r];
            bob++;
            r--;
        }
    }
    cout << alice << " " << bob << endl;
}