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
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> v1, v2;
    string s;
    cin >> s;
    for (int i = 0; i < 2 * n; i++)
    {
        i < n ? v1.pb(s[i] - '0') : v2.pb(s[i] - '0');
    }
    sort(all(v1));
    sort(all(v2));
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] >= v2[i])
        {
            flag = false;
            break;
        }
    }
    if (!flag)
    {
        flag = true;
        for (int i = 0; i < n; i++)
        {
            if (v1[i] <= v2[i])
            {
                flag = false;
                cout << "NO"
                     << "\n";
                return 0;
            }
        }
    }
    if (flag)
        cout << "YES"
             << "\n";
    return 0;
}