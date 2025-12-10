#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

vector<int> query(const vector<vector<int>> &sum, int l, int r)
{
    vector<int> result(3);
    for (int j = 0; j < 3; j++)
        result[j] = sum[r][j] - (l > 0 ? sum[l - 1][j] : 0);
    return result;
}

int main()
{
    ifstream fin("bcount.in");
    ofstream fout("bcount.out");
    int n, q;
    fin >> n >> q;
    vector<short> IDs(n);
    for (int i = 0; i < n; i++)
        fin >> IDs[i];
    vector<vector<int>> count(n, vector<int>(3, 0));
    for (int i = 0; i < n; i++)
        count[i][IDs[i] - 1]++;
    vector<vector<int>> sum(n, vector<int>(3, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            sum[i][j] = i > 0 ? sum[i - 1][j] + count[i][j] : count[i][j];
    for (int i = 0; i < q; i++)
    {
        int l, r;
        fin >> l >> r;
        vector<int> result = query(sum, l - 1, r - 1);
        fout << result[0] << " " << result[1] << " " << result[2] << endl;
    }
}