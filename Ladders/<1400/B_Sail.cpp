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
    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string s;
    cin >> s;
    int time = 0;
    int k = 0;
    int i = 0;
    while (time != t)
    {
        if (s[i] == 'S' && sy > ey)
        {
            sy--;
        }
        else if (s[i] == 'E' && sx < ex)
        {
            sx++;
        }
        else if (s[i] == 'W' && sx > ex)
        {
            sx--;
        }
        else if (s[i] == 'N' && sy < ey)
        {
            sy++;
        }
        i++;
        time++;
        if (sx == ex && sy == ey)
        {
            cout << time << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}