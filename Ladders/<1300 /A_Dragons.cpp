#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <math.h>
#include <stdlib.h>
#include <deque>
using namespace std;

struct dragon
{
    double dragon_stregth;
    double bonus;
};
bool compare(dragon a, dragon b)
{
    return double(a.dragon_stregth) < double(b.dragon_stregth);
}
int main()
{
    int s, n;
    cin >> s >> n;
    vector<dragon> dragons;
    for (int i = 0; i < n; i++)
    {
        dragon d;
        cin >> d.dragon_stregth >> d.bonus;
        dragons.push_back(d);
    }
    sort(dragons.begin(), dragons.end(), compare);
    for (int i = 0; i < n; i++)
    {
        if (s > dragons[i].dragon_stregth)
        {
            s += dragons[i].bonus;
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}