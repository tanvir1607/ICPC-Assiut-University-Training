#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col, query;
    cin >> row >> col >> query;

    vector<vector<char>> grid(row, vector<char>(col, '.'));
    while (query--)
    {
        int row1, col1, row2, col2;
        char ch;
        cin >> row1 >> col1 >> row2 >> col2 >> ch;

        --row1, --row2, --col1, --col2;
        for (int i = min(row1, row2); i <= max(row1, row2); i++)
            for (int j = min(col1, col2); j <= max(col1, col2); j++)
                grid[i][j] = ch;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
            cout << grid[i][j];
        cout << endl;
    }

    return 0;
}
