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
    int x = 0;
    while (t--)
    {
        string s;
        cin >> s;

        if (s[0] == '+' || s[2] == '+')
            x++;
        else if (s[0] == '-' || s[2] == '-')
            x--;
    }

    cout << x << "\n";
    return 0;
}