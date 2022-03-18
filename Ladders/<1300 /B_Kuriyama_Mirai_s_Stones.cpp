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
    int n;
    cin >> n;
    vector<ll> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.pb(x);
    }
    int t;
    cin >> t;
    vector<ll> s;
    for (int i = 0; i < n; i++)
    {
        s.pb(a[i]);
    }
    vector<ll> temp(a);
    sort(all(s));
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += s[i];
        s[i] = sum1;
        sum2 += a[i];
        a[i] = sum2;
    }
    while (t--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            l > 1 ? cout << a[r - 1] - a[l - 2] << "\n" : cout << a[r - 1] << "\n";
        }
        else
        {
            l > 1 ? cout << s[r - 1] - s[l - 2] << "\n" : cout << s[r - 1] << "\n";
        }
    }
    return 0;
}