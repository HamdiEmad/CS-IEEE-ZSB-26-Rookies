#include <iostream>
using namespace std;

int main()
{
    short init_size, types, querries, querry_number;
    cin >> init_size;
    cin >> types;
    short weights[types];
    bool added[types] = {false};
    for (short i = 0; i < types; i++)
    {
        cin >> weights[i];
    }
    cin >> querries;
    for (short i = 0; i < querries; i++)
    {
        cin >> querry_number;
        if (!added[querry_number - 1])
        {
            init_size += weights[querry_number - 1];
            added[querry_number - 1] = true;
        }
        else if (added[querry_number - 1])
        {
            init_size -= weights[querry_number - 1];
            added[querry_number - 1] = false;
        }
        cout << init_size << endl;
    }
}