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
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        m[x]++;
    }
    // 1 2 4
    // 1 2 6
    // 1 3 6
    // n(6)+n(4) = n(1) = n/3 = n(2)+n(3); n(4) <= n(2), n(3) <= n(6)
    if(!(m[1] == n/3 && m[2]+m[3] == n/3 && m[4]+m[6] == n/3 && m[4] <= m[2] && m[3] <= m[6]))
    {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0; i < m[4]; i++)
    {
        cout << "1 2 4\n";
        m[2]--;
    }
    for (int i = 0; i < m[2]; i++)
    {
        cout << "1 2 6\n";
        m[6]--;
    }
    for (int i = 0; i < m[3]; i++)
    {
        cout << "1 3 6\n";
    }

    
    return 0;
}