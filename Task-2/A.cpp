#include <iostream>
#include <vector>
using namespace std;

long long get_sum(const vector<long long> &sum, int start, int end)
{
    return sum[end] - (start > 0 ? sum[start - 1] : 0);
}

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> nums(n);
    vector<long long> sum(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    for (int i = 0; i < n; i++)
        sum[i] = nums[i] + (i > 0 ? sum[i - 1] : 0);
    for (int i = 0; i < q; i++)
    {
        int start, end;
        cin >> start >> end;
        cout << get_sum(sum, start - 1, end - 1) << endl;
    }
}