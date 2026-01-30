#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int key, int s, int e)
{
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;
    if (key == arr[mid])
    {
        return mid;
    }
    if (key < arr[mid])
        return binarySearch(arr, key, s, mid - 1);
    else
        return binarySearch(arr, key, mid + 1, e);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int arr_xor = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr_xor ^= arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            int required = arr_xor ^ arr[i];
            int index = binarySearch(arr, required, 0, n - 1);
            if (index != -1)
            {
                cout << arr[index] << endl;
                break;
            }
        }
    }
}