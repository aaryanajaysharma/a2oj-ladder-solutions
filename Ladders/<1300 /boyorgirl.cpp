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
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int distinct = 1;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if(s[i] != s[i+1])
        distinct++;
    }
    if(distinct % 2 == 0)
    cout << "CHAT WITH HER!" << endl;
    else
    cout << "IGNORE HIM!" << endl;
    return 0;
}