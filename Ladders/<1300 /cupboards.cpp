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
    int n = 1;
    cin>>n;
    int left1 = 0, right1 = 0;

    for (int i = 0; i < n; i++)
    {
        bool l,  r;
        cin >> l >> r;
        if(l)
        {
            left1++;
        }
        if(r)
        {
            right1++;
        }
    }

    int ans = min(left1, n - left1)+min(right1, n - right1);
    cout << ans << endl;

}