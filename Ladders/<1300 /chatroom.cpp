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
    string ans = "";
    unordered_set<char> set = {'h', 'e', 'l', 'o'};
    for (int i = 0; i < s.length(); i++)
    {
        if (set.count(s[i]))
        {
            ans += s[i];
        }
    }
    int h = 0, e = 0, l = 0, o = 0;
    string f = "";
    for (int i = 0; i < ans.length(); i++)
    {
        if (ans[i] == 'h' && h < 1 && f == "")
        {
            f += ans[i];
            h++;
        }
        else if (ans[i] == 'e' && e < 1 && f == "h")
        {
            f += ans[i];
            e++;
        }
        else if (ans[i] == 'l' && l < 2 && (f == "he" || f == "hel"))
        {
            f += ans[i];
            l++;
        }
        else if (ans[i] == 'o' && o < 1 && f == "hell")
        {
            f += ans[i];
            o++;
        }
    }
    if (f == "hello")
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}