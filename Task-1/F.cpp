#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    stack<int> s;
    vector<int> result(n);
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && nums[s.top()] >= nums[i])
            s.pop();
        result[i] = s.empty() ? 0 : s.top() + 1;
        s.push(i);
    }
    for (int i = 0; i < n; i++)
        cout << result[i] << " ";
}
