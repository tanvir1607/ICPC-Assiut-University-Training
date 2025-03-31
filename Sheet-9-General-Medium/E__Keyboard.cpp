#include <bits/stdc++.h>
using namespace std;

int main()
{
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char direction;
    cin >> direction;
    string ans;
    cin >> ans;

    int shift = -1;
    if (direction == 'L') shift = 1; 
    for (char &ch : ans)
        ch = key[key.find(ch) + shift];

    cout << ans << endl;

    return 0;
}
