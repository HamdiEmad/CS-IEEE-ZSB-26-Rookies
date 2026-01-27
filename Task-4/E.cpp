#include <iostream>
using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n >> x;
    long long nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int l = 0;
    long long current_sum = 0, num_of_subarrays = 0;
    for (int r = 0; r < n; r++)
    {
        current_sum += nums[r];
        while (current_sum > x && l <= r)
        {
            current_sum -= nums[l++];
        }
        if (current_sum == x)
        {
            num_of_subarrays++;
        }
    }
    cout << num_of_subarrays << endl;
    return 0;
}