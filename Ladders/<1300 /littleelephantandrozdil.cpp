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

struct city{
    int distance;
    int index;
};
bool compare(city a, city b){
    return a.distance < b.distance;
}
int main()
{
    int n;
    cin >> n;
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    vector<city> cities;
    for (int i = 0; i < n; i++)
    {
        city c;
        c.index = i;
        cin >> c.distance;
        cities.push_back(c);
    }
    sort(cities.begin(), cities.end(), compare);
    if(cities[0].distance < cities[1].distance){
        cout << cities[0].index + 1 << endl;
    }
    else{
        cout << "Still Rozdil" << endl;
    }
    return 0;
}