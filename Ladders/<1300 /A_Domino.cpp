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
    int n, sum_upper = 0, sum_lower = 0;
    multimap<int, int> m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        m.insert({x, y});
        sum_upper += x;
        sum_lower += y;
    }
    if (!(sum_upper & 1 || sum_lower & 1))
    {
        cout << "0\n";
        return 0;
    }

    if (n == 1 || (sum_upper + sum_lower)%2 == 1)
    {
        cout << "-1\n";
        return 0;
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        if ((it->first+it->second)%2 == 1)
        {
            cout << "1\n";
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}