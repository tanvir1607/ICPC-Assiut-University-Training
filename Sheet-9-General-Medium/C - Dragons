#include <bits/stdc++.h>
using namespace std;

int main()
{
    int current, dragons;
    cin >> current >> dragons;
    vector<pair<int, int>> strength(dragons);
    for (int i = 0; i < dragons; i++)
        cin >> strength[i].first >> strength[i].second;
    
    sort(strength.begin(), strength.end());
    bool flag = true;
    for (auto x : strength)
    {
        if (current <= x.first)
        {
            flag = false;
            break;
        }
        else current += x.second;
    }
    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}
