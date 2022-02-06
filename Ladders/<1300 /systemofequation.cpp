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
    int n, m;
    cin >> n >> m;
    int count = 0;
    int maximum = max(n, m);
    for (int i = 0; i <= maximum; i++)
    {
        for (int j = 0; j <= maximum; j++)
        {
            if(i*i+j == n && i+j*j == m)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}