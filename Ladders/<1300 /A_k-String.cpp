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
    bool flag = true;
    string s;
    int k;
    cin >> k;
    cin >> s;
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second % k != 0)
        {
            flag = false;
            break;
        }
        else
        {
            it->second /= k;
        }
    }
    if (flag)
    {
        while (k--)
        {
            for (auto it = m.begin(); it != m.end(); it++)
            {
                int x = it->second;
                while (x--)
                {
                    cout << it->first;
                }
            }
        }
    }
    else
    {
        cout << "-1\n";
    }
    return 0;
}