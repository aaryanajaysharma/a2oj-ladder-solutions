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
    if (s.length() < 3)
    {
        cout << s << endl;
        return 0;
    }
    int rem = 0;
    for (int i = 0; i < s.length() - 2;)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 3;
        }
        else if (s[i + 1] == 'W' && s[i + 2] == 'U' && s[i + 3] == 'B' && (i != s.length() - 3))
        {
            cout << s[i] << " ";
            i += 4;
        }
        else
        {
            cout << s[i];
            i++;
        }
        rem = i;
    }
    for (int i = rem; i < s.length(); i++)
    {
        cout << s[i];
    }
    return 0;
}