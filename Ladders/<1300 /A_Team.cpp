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
    int t = 1;
    cin >> t;
    int ans = 0;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a + b + c >= 2 ? ans++ : ans = ans;
    }
    cout << ans << endl;
    return 0;
}