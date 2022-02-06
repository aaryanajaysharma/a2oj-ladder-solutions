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
    int k;
    cin >> k;
    vector<int> a(12);
    for (int i = 0; i < 12; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    if(k == 0){
        cout << 0 << endl;
        return 0;
    }
    sort(a.begin(), a.end(), greater<int>());
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
        if(sum >= k){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}