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
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum == n)
    {
        sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum += a[i] * (a[i] + 1) / 2;
        }
        cout << sum << " " << sum << endl;
        return 0;
    }
    int max = 0, min = 0;
    sort(a.begin(), a.end());
    vector<int> temp = a;
    int t = n;
    while (a.size() > 0 && n > 0)
    {
        if (a[a.size() - 1] > 0)
        {
            max += a[a.size() - 1];
            a[a.size() - 1]--;
            sort(a.begin(), a.end());
            n--;
        }
        else
        {
            a.pop_back();
        }
    }
    a = temp;
    n = t;
    while (a.size() > 0 && n > 0)
    {
        if (a[0] > 0)
        {
            min += a[0];
            a[0]--;
            sort(a.begin(), a.end());
            n--;
        }
        else
        {
            a.erase(a.begin());
        }
    }
    cout << max << " " << min << endl;
    return 0;
}