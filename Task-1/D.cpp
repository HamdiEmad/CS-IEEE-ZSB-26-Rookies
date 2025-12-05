#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<long, vector<long>, greater<long>> pq;
    for (int i = 0; i < n; i++)
    {
        long x;
        cin >> x;
        pq.push(x);
    }
    long arr[n];
    int i = 0;
    while (!pq.empty())
    {
        arr[i++] = pq.top();
        pq.pop();
    }
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            count++;
    }
    cout << count << endl;
}