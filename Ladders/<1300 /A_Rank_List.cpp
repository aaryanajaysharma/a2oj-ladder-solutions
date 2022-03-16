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

struct team
{
    int p;
    int t;
};
bool compare(team t1, team t2)
{
    return t1.p > t2.p || (t1.p == t2.p && t1.t < t2.t);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<team> v;
    map<pair<int, int>, int> m;
    for (int i = 0; i < n; i++)
    {
        int p, t;
        cin >> p >> t;
        v.push_back({p, t});
        m[make_pair(p, t)]++;
    }
    sort(all(v), compare);
    // for(auto it: v)
    // {
    //     cout << it.p << " " << it.t << "\n";
    // }
    pair<int, int> ans = {v[k-1].p, v[k-1].t};
    // for(auto i: m){
    //     cout << i.first.first << " " << i.first.second << " " << i.second << "\n";
    // }
    cout << m[ans] << "\n";
    return 0;
}