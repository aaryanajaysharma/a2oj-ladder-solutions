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

bool checkPalindrome(string s)
{

    int i = 0;
    int j = s.length() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    int max = INT32_MIN;
    int moves = 0;
    bool flag = true;
    for (int i = 0; i < s.length(); i++)
    {
        moves += m[s[i]] % 2;
        if (m[s[i]] % 2 == 1)
        {
            flag = false;
        }
    }
    if (moves % 2 == 0)
    {
        if (checkPalindrome(s) || flag)
        {
            cout << "First\n";
        }
        else
        {
            cout << "Second\n";
        }
    }
    else
    {
        cout << "First\n";
    }
    return 0;
}