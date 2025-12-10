#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long get_non_sorted_sum(const vector<long long> &non_sorted_sum, int start, int end)
{
    return non_sorted_sum[end] - (start > 0 ? non_sorted_sum[start - 1] : 0);
}

int main()
{
    int n;
    cin >> n;
    vector<long long> stones(n);
    vector<long long> sorted(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> stones[i];
        sorted[i] = stones[i];
    }
    sort(sorted.begin(), sorted.end());
    vector<long long> non_sorted_sum(n);
    vector<long long> sorted_sum(n);
    for (int i = 0; i < n; i++)
    {
        non_sorted_sum[i] = stones[i] + (i > 0 ? non_sorted_sum[i - 1] : 0);
        sorted_sum[i] = sorted[i] + (i > 0 ? sorted_sum[i - 1] : 0);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
            cout << get_non_sorted_sum(non_sorted_sum, l - 1, r - 1) << endl;
        else
            cout << get_non_sorted_sum(sorted_sum, l - 1, r - 1) << endl;
    }
}