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
    int sum_x = 0, sum_y = 0, sum_z = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        sum_x += x, sum_y += y, sum_z += z;
    }
    !sum_x && !sum_y && !sum_z ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}