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
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v1.pb(a);
        v2.pb(b);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && v1[i] == v2[j])
            {
                v1[i] = 0;
            }
        }
    }
    int bottles = 0;
    for (int i = 0; i < n; i++)
    {
        bottles += !!v1[i];
    }
    cout << bottles << "\n";
    return 0;
}