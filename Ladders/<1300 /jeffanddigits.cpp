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
    int n;
    cin >> n;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    if(m[5] < 9 && m[0] == 0 ){
        cout << "-1" << endl;
        return 0;
    }
    if(m[5] < 9 && m[0] > 0){
        cout << "0" << endl;
        return 0;
    }
    if(!m[0]){
        cout << -1 << endl;
        return 0;
    }
    for (int i = 0; i < m[5] - m[5]%9; i++)
    {
        cout << "5";
    }
    for (int i = 0; i < m[0]; i++)
    {
        cout << "0";
    }
    cout << endl;
    return 0;
}