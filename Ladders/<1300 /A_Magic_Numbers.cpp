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
    string s;
    cin >> s;
    while (s.length() > 0)
    {
        if (s.substr(0, 3) == "144")
        {
            s.erase(0, 3);
        }
        else if (s.substr(0, 2) == "14")
        {
            s.erase(0, 2);
        }
        else if (s[0] == '1')
        {
            s.erase(0, 1);
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}