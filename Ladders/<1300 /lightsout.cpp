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
    int a[3][3], b[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            b[i][j] = 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 0 || a[i][j] % 2 == 0)
            {
                continue;
            }
            else
            {
                b[i][j] = 1 - b[i][j];
                if ((j + 1) < 3)
                {
                    b[i][j + 1] = 1 - b[i][j + 1];
                }
                if ((i + 1) < 3)
                {
                    b[i + 1][j] = 1 - b[i + 1][j];
                }
                if ((i - 1) >= 0)
                {
                    b[i - 1][j] = 1 - b[i - 1][j];
                }
                if ((j - 1) >= 0)
                {
                    b[i][j - 1] = 1 - b[i][j - 1];
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j];
        }
        cout << "\n";
    }
    return 0;
}
