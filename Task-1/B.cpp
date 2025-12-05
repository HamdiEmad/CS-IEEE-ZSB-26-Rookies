#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;
    long count = 1, maxCount = 1;
    for (long i = 0; i < input.length() - 1; i++)
    {
        if (i == input.length() - 1)
            break;
        count = (input[i] == input[i + 1]) ? count + 1 : 1;
        maxCount = max(maxCount, count);
    }
    cout << maxCount << endl;
    return 0;
}