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
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '.')
        {
            cout << '0';
        }
        else if(s[i] == '-' && s[i+1] == '.')
        {
            cout << '1';
            i++;
        }
        else
        {
            cout << '2';
            i++;
        }
    }
    return 0;
}