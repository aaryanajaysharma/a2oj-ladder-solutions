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
    int *a = new int[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    int i = 0;
    while (n > 0)
    {
        n -= a[i];
        if (n <= 0)
        {
            cout << i + 1 << endl;
            break;
        }
        if (i < 6)
            i++;
        else
        {
            i = 0;
        }
    }

    return 0;
}