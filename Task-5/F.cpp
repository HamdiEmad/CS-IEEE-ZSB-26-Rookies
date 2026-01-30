#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long arr_xor = 0;
    for (int i = 0; i < n; i++)
    {
        arr_xor ^= arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << (arr_xor ^ arr[i]) << " ";
    }
}