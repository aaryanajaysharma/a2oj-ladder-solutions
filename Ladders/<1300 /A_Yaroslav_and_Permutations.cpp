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
    unordered_map<int, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int max_count = 0;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > max_count)
        {
            max_count = it->second;
        }
    }
    // watch(max_count);
    if (max_count <= n / 2 + 1 && n % 2 == 1)
    {
        cout << "YES\n";
    }
    else if (max_count <= n / 2 && n % 2 == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}