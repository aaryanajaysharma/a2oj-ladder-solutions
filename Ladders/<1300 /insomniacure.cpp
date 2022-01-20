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
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    vector<int> v;
    for (int i = 1; i <= d; i++)
    {
        if(i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0)
        {   
            v.push_back(i);
        }
    }
    cout << d - v.size() << endl;
    return 0;
}