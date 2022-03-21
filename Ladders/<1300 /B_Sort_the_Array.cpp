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
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.pb(x);
    }
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            flag = true;
        }
    }
    if (!flag)
    {
        cout << "yes\n";
        cout << "1 1"
             << "\n";
        return 0;
    }
    int start = 0, end = n - 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            start = i - 1;
            while (1)
            {
                if (a[i] < a[i - 1])
                {
                    if (i < n - 1)
                        i++;
                    else
                        break;
                }
                else
                {
                    end = i - 1;
                    break;
                }
            }
            break;
        }
    }
    vector<int> v = a;
    reverse(a.begin() + start, a.begin() + end + 1);
    sort(all(v));
    for (int i = 0; i < n; i++)
    {
        if (v[i] != a[i])
        {
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n"
         << start + 1 << " " << end + 1 << "\n";
    return 0;
}