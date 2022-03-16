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
#include <numeric>
#define watch(x) cout << #x << " = " << x << "\n"
#define pb emplace_back
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define ll long long int
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
// #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
// #endif
    int n;
    cin >> n;
    int count = 0;
    unordered_map<int, int> m;
    vector<int> a[5001];

    for (int i = 0; i < 2*n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
        // watch(x), watch(m[x]);
        a[x].push_back(i);
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        // watch(it->second);
        if (it->second % 2 != 0)
        {
            cout << -1 << "\n";
            return 0;
        }
        // cout << it->first << " " << it->second << "\n";
    }
    for (int i = 0; i < 5001; i++)
    {
        if (a[i].size() != 0)
        {
            while (a[i].size() != 0)
            {
                cout << a[i].back()+1;
                a[i].pop_back();
                cout << " " << a[i].back()+1 << "\n";
                a[i].pop_back();
            }
        }
    }

    return 0;
}