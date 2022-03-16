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
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a, w;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        w.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(w.begin(), w.end());
    if (a[n - 1] < w[0])
    {
        for (int i = a[n - 1]; i < w[0]; i++)
        {
            if (a[0] <= i / 2)
            {
                cout << i << "\n";
                return 0;
            }
        }
    }
    cout << "-1\n";
    return 0;
}