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
    vector<int> a(n);
    int min = INT_MAX, max = INT_MIN;
    int amazing = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < min)
        {
            min = a[i];
            amazing++;
        }
        if (a[i] > max)
        {
            max = a[i];
            amazing++;
        }
    }
    cout << amazing - 2 << endl;
    return 0;
}