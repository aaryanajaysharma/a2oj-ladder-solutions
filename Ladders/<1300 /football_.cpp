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
    if(s.length()<7){
        cout <<"NO"<<endl;
        return 0;
    }
    for (int i = 0; i < s.length() - 6; i++)
    {
        if(s.substr(i, 7) == "0000000" || s.substr(i,7) == "1111111")
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}