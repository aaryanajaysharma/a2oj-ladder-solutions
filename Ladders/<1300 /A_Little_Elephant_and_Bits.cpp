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
#include<bitset>
#define watch(x) cout << #x << " = " << x << "\n"
using namespace std;

int main()
{
    string s;
    cin >> s;
    bitset<100000> bs(s);
    if (bs.count() == s.length())
    {
        cout << s.substr(0, s.length() - 1) << "\n";
        return 0;
    }
    bool flag = false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0' && !flag)
        {
            flag = true;
            continue;
        }
        cout << s[i];
    }
    cout << "\n";
    return 0;
}