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
#define watch(x) cout << #x << " = " << x << endl
using namespace std;

struct segment{
    int x;
    int y;
    int index;
};

int main()
{
    int n;
    cin >> n;
    vector<segment> segments;
    int min_x = INT32_MAX, max_y = INT32_MIN;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        segments.push_back({x, y, i});
        min_x = min(min_x, x);
        max_y = max(max_y, y);
    }
    sort(segments.begin(), segments.end(), [](segment a, segment b){
        return a.x < b.x;
    });
    int p = 0;
    do{
        if(segments[p].y < max_y){
            p++;
            continue;
        }
        else{
            cout << segments[p].index +1<< "\n";
            return 0;
        }
    } while(segments[p].x == min_x);
    cout << "-1\n";
    return 0;
}