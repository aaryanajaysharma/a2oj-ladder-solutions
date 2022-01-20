#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<queue>
#include<math.h>
#include<stdlib.h>
#include<deque>
using namespace std;

int main()
{
    unordered_multiset<char> s1, s2;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s1.insert(s[i]);
    }
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s1.insert(s[i]);
    }
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        s2.insert(s[i]);
    }

    if(s1 == s2)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
    return 0;
}