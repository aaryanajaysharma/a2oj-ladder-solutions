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
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> mp;
    vector<int> cummulative_distinct;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        mp[a[i]]++;
        cummulative_distinct.push_back(mp.size());

    }
    int total = mp.size();
    for (int i = 0; i < m; i++)
    {
        int l;
        cin >> l;
        cout << cummulative_distinct[n-l] << "\n";
    }
    return 0;
}