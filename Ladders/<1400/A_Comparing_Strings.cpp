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
#define watch(x) cout << #x << " = " << x << endl
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.length() != s2.length())
    {
        cout << "NO\n";
        return 0;
    }
    int count = 0;
    unordered_map<int, int> m1, m2;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            count++;
        }
        m1[s1[i]]++;
        m2[s2[i]]++;
    }
    if (m1 != m2)
    {
        cout << "NO\n";
        return 0;
    }
    if (count == 2)
    {
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";
    return 0;
}