#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <math.h>
#include <stdlib.h>
#include <deque>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    unordered_map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
        mp[a]++;
    }

    sort(v.begin(), v.end());
    int min = INT32_MAX;
    for (int i = 0; i <= m - n; i++)
    {
        if (v[i + n - 1] - v[i] < min)
            min = v[i + n - 1] - v[i];
    }
    cout << min;
    return 0;
}