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

    for (int i = -n; i <= n; i++)
    {
        for (int j = 0; j < abs(i); j++)
        {
            cout << "  ";
        }
        int x = 0;
        cout << "0";
        for (int k = abs(i); k <= n; k++)
        {
            if (k + i == 0 || k - i == 0)
            {
                continue;
            }
            if (i < 0)
                cout << " " << k + i, x = k + i;
            else
                cout << " " << k - i, x = k - i;
        }
        for (x = x - 1; x >= 0; x--)
        {
            x != 0 ? cout << " " << x : cout << " " << x;
        }
        cout << endl;
    }
    return 0;
}