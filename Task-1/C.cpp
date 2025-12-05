#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long num;
    cin >> num;
    long sum = num * (num + 1) / 2;
    if (sum % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    vector<long> set1, set2;
    long half_sum = sum / 2;
    for (long i = num; i > 0; i--)
    {
        if (half_sum >= i)
        {
            half_sum -= i;
            set1.push_back(i);
        }
        else
            set2.push_back(i);
    }
    cout << "YES" << endl;
    cout << set1.size() << endl;
    for (long i = set1.size() - 1; i >= 0; i--)
        cout << set1.at(i) << " ";
    cout << endl;
    cout << set2.size() << endl;
    for (long i = set2.size() - 1; i >= 0; i--)
        cout << set2.at(i) << " ";
}