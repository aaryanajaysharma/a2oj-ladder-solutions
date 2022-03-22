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
    int n = 1;
    cin >> n;
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    int max = INT32_MIN;
    string ans;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > max)
        {
            ans = it->first;
            max = it->second;
        }
    }
    cout << ans << endl;
    return 0;
}