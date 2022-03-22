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
    int min = INT_MAX, max = 0, min_index = 0, max_index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
            max_index = i;
        }
        else if (a[i] == max && max_index > i)
        {
            max_index = i;
        }

        if (a[i] < min)
        {
            min = a[i];
            min_index = i;
        }
        else if (a[i] == min && min_index < i)
        {
            min_index = i;
        }
    }
    // cout << min_index << " " << max_index << endl;
    if (min_index == max_index)
        cout << 0 << endl;
    else
    {
        if (min_index > max_index)
            cout << max_index + n - 1 - min_index << endl;
        else
        {
            cout << max_index + n - 2 - min_index << endl;
        }
    }
    return 0;
}