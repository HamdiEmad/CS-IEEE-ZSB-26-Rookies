#include <iostream>
using namespace std;

bool check(long long v, short k, long long n)
{
    long long sum = 0, current = v;
    while (current > 0)
    {
        sum += current;
        current /= k;
        if (sum >= n)
        {
            return true;
        }
    }
    return sum >= n;
}

int main()
{
    long long n;
    short k;
    cin >> n >> k;
    long long left = 1, right = n;
    while (left < right)
    {
        long long mid = left + (right - left) / 2;
        if (check(mid, k, n))
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << left << endl;
    return 0;
}