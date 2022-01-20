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
    int lower = 0, upper = 0;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(islower(s[i]))
        {
            lower++;
        }
        else if(isupper(s[i]))
        {
            upper++;
        }
    }

    if(lower >= upper){
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    else {

        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}