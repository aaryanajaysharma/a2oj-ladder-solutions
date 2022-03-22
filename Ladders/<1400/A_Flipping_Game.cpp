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
    vector<bool> a;
    unordered_map<bool, int> m;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        bool x;
        cin >> x;
        a.push_back(x);
        m[x]++;
    }
    if (m[1] == n)
    {
        cout << n - 1 << "\n";
        return 0;
    }

    if (m[0] == n)
    {
        cout << n << "\n";
        return 0;
    }
    int max_zeros = INT32_MIN, max_ones_added = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int count_zeros = 0, count_ones = 0;
            for (int k = i; k <= j; k++)
            {
                a[k]? count_ones++:count_zeros++;
            }
            if(count_zeros >= max_zeros && max_ones_added < count_zeros - count_ones){
                max_ones_added = count_zeros - count_ones;
            }
        }
    }
    cout << m[1]+max_ones_added << "\n";
    return 0;
}