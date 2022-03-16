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
    unordered_map<int, int> c;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        switch (x)
        {
        case 25:
            c[25]++;
            break;
        case 50:
            c[50]++;
            if (c[25] > 0)
            {
                c[25]--;
            }
            else
            {
                cout << "NO\n";
                return 0;
            }
            break;
        case 100:
            c[100]++;
            if (c[50] > 0 && c[25] > 0)
            {
                c[50]--, c[25]--;
            }
            else if (c[25] >= 3)
            {
                c[25] -= 3;
            }
            else
            {
                cout << "NO\n";
                return 0;
            }
            break;
        }
    }
    cout << "YES\n";
    return 0;
}