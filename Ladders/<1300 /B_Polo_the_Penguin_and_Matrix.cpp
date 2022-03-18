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
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> a;
    int sum = 0;
    bool flag = false;
    for (int i = 0; i < n * m; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        sum += a[i];
        if (a[0] % d != a[i] % d)
            flag = true;
    }
    if (flag)
    {
        cout << "-1\n";
        return 0;
    }
    sort(all(a));
    int index = n * m / 2;
    int min_moves = INT32_MAX;
    int moves = 0;
    for (int i = 0; i < n * m; i++)
    {
        moves += abs(a[i] - a[index]) / d;
    }
    min_moves = min(min_moves, moves);
    cout << min_moves << "\n";
    return 0;
}