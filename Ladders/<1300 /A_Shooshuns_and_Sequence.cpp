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
bool check_same(vector<int> v)
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] != v[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if (check_same(v))
    {
        cout << 0 << endl;
        return 0;
    }

    // if n = k condition
    if (n == k)
    {
        cout << n - 1 << endl;
        return 0;
    }

    for (int i = k - 1; i < n - 1; i++)
    {
        if (v[k - 1] != v[i + 1])
        {
            cout << -1 << endl;
            return 0;
        }
    }
    while (v[k] == v[k - 1] && k > 0)
    {
        k--;
    }

    cout << k << endl;
}