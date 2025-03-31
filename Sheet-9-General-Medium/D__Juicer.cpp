#include <bits/stdc++.h>
using namespace std;

int main()
{
    int oranges, juicerSize, wasteSize;
    cin >> oranges >> juicerSize >> wasteSize;
    vector<int> vec(oranges);
    for (auto &it : vec) cin >> it;

    int times = 0, totalSize = 0;
    for (int i = 0; i < oranges; i++)
    {
        if (vec[i] > juicerSize) continue;
        totalSize += vec[i];
        if (totalSize > wasteSize) totalSize = 0, times++;
    }
    cout << times << endl;

    return 0;
}
