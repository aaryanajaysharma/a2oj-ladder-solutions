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
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int y, k, n;
    cin >> y >> k >> n;
    bool flag = false;
    int x = k-y%k;
    for (int i = x; i <= n - y; i+=k)
    {
        flag = true;
        cout << i << " ";
    }
    if (!flag)
    {
        cout << -1 << "\n";
    }
    return 0;
}