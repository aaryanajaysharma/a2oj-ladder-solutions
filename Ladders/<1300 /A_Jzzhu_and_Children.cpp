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
struct child
{
    int a;
    int index;
};
int main()
{
    int n, m;
    cin >> n >> m;
    deque<child> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].a;
        a[i].index = i;
    }
    int ans = 0;
    for (int i = 0; a.size() != 1; i++)
    {
        if (a[0].a <= m)
            a.pop_front();
        else
        {
            child temp = {a[0].a - m, a[0].index};
            a.pop_front();
            a.push_back(temp);
        }
    }
    ans = a[0].index;
    cout << ans + 1 << endl;
    return 0;
}