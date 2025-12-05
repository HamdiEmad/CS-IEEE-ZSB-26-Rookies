#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum;
    cin >> sum;
    vector<pair<long long, int>> nums(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> nums[i - 1].first;
        nums[i - 1].second = i;
    }
    sort(nums.begin(), nums.end());
    int left = 0, right = n - 1;
    while (left < right)
    {
        long long current_sum = nums[left].first + nums[right].first;
        if (current_sum == sum)
        {
            cout << nums[right].second << " " << nums[left].second << endl;
            return 0;
        }
        else if (current_sum < sum)
            ++left;
        else
            --right;
    }
    cout << "IMPOSSIBLE" << endl;
}