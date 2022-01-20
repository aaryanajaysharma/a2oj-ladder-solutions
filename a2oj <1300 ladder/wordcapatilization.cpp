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
    if(islower(s[0])){
        s[0] = toupper(s[0]);
    }
    cout << s << endl;
    return 0;
}