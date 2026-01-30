#include <iostream>
#include <math.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long binary(long long num, long long exp)
{
    long long result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (result * num) % MOD;
        }
        num = (num * num) % MOD;
        exp /= 2;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << binary(2, n) << endl;
}