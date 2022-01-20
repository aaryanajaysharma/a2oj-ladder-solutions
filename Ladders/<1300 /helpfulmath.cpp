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
    int n = s.size();
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if(s[i] != '+')
        v.push_back(s[i] - '0');
    }

    sort(v.begin(), v.end());
    n = v.size();
    for (int i = 0; i < n; i++)
    {
        i != n - 1? cout << v[i] << "+": cout << v[i];
    }
    return 0;
}