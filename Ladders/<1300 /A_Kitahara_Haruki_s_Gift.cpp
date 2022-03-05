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
#define watch(x) cout << #x << " = " << x << endl
int main()
{
    int n;
    cin >> n;
    int n100 = 0, n200 = 0;
    for (int i = 0; i < n; i++)
    {
        int w;
        cin >> w;
        w == 100 ? n100++ : n200++;
    }
    if (n100 % 2 == 1)
    {
        cout << "NO\n"
             << endl;
        return 0;
    }
    if (n200 % 2 == 1 && n100 <= 1)
    {
        cout << "NO\n"
             << endl;
        return 0;
    }
    cout << "YES\n"
         << endl;
    return 0;
}