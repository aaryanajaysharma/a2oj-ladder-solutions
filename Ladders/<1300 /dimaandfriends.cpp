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
int decrement(int x) {  return (x-1); }
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
    int ways = 0;
    for (int i = 1; i <= 5; i++)
    {   
        if((sum+i)%(n+1) != 1)
        ways++;
    }
    
    cout << ways << endl;
    return 0;
}