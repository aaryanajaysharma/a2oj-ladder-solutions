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
    long long int n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k > n / 2)
        {
            cout << 2 * (k - n/2) << endl;
        }
        else
        {
            cout << 2 * k - 1 << endl;
        }
    }
    else
    {
        if (k > n / 2 + 1)
        {
            cout << 2 * (k - n/2) - 2 << endl;
        }
        else
        {
            cout << 2 * k - 1 << endl;
        }
    }
    return 0;
}