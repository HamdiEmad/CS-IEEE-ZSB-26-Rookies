#include <iostream>
#include <vector>
using namespace std;

long long get_sum(const vector<long long> &sum, int start, int end)
{
    return sum[end] - (start > 0 ? sum[start - 1] : 0);
}

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int t = 0; t < test_cases; t++)
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
            int start, end, value;
            cin >> start >> end >> value;
            long long range_sum = get_sum(sum, start - 1, end - 1);
            int reminder = sum[n - 1] - range_sum;
            int result = reminder + (end - start + 1) * value;
            string output = (result % 2 == 0) ? "NO" : "YES";
            cout << output << endl;
        }
    }
}