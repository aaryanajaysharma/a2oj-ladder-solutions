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
    unordered_map<int, int> m1;
    unordered_map<int, int> m2;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == ' ') continue;
        m1[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if(s2[i] == ' ') continue;
        m2[s2[i]]++;
    }
    for(auto it = m2.begin(); it != m2.end(); it++)
    {
        if(it->second > m1[it->first])
        {
            cout << "NO\n" << endl;
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}