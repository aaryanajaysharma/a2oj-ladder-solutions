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
    int a, b, n;
    cin >> a >> b >> n;
    if (a % b == 0)
    {
        cout << a;
        for (int i = 0; i < n; i++)
        {
            cout << "0";
        }
        cout << "\n";
        return 0;
    }
    for (int i = 0; i < 10; i++)
    {
        int x = a * 10;
        if ((x + i) % b == 0)
        {
            cout << x + i;
            for (int i = 0; i < n - 1; i++)
            {
                cout << "0";
            }
            cout << "\n";
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}