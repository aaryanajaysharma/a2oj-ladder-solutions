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
bool compare(pair<char, int> a, pair<char, int> b)
{
    return a.second > b.second;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, ll> m;
    ll coins = 0;
    for (auto i : s)
        m[i]++;
    vector<pair<char, ll>> v;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        v.push_back({it->first, it->second});
    }
    sort(v.begin(), v.end(), compare);
    for (auto it = v.begin(); it != v.end(); it++)
    {
        if (it->second >= k)
        {
            coins += k * k;
            break;
        }
        else
        {
            k -= it->second;
            coins += it->second * it->second;
        }
    }
    cout << coins << "\n";
    return 0;
}