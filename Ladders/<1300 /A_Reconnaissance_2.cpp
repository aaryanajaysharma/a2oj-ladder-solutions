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
#include <limits.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = INT32_MAX;
    int min_i, min_j;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            if (min > abs(a[i] - a[i + 1]))
            {
                min = abs(a[i] - a[i + 1]);
                min_i = i, min_j = i + 1;
            }
        }
        else
        {
            if (min > abs(a[i] - a[0]))
            {
                min = abs(a[i] - a[0]);
                min_i = i, min_j = 0;
            }
        }
    }
    cout << min_i + 1 << " " << min_j + 1 << endl;
    return 0;
}