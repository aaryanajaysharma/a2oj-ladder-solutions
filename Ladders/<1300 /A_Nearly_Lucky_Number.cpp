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
    int countl = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '4')
            countl++;
        else if (s[i] == '7')
            countl++;
    }
    if (countl == 4 || countl == 7)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}