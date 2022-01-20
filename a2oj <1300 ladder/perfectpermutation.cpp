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
    if( n % 2 == 1)
    cout << -1;
    else {
        for (int i = 1; i <= n; i+=2)
        {
            cout << i + 1 <<" " << i << " ";
        }
        cout << "\n";
    }
    return 0;
}