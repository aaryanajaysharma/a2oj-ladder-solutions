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

int main()
{
    int n, m;
    cin >> n >> m;
    deque<int> houses(m); // houses where task is to be done
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        houses.push_back(a);
    }
    long long int time = 0;
    time += houses.front() - 1;
    do
    {
        int prev = houses.front();
        houses.pop_front();
        if (houses.front() >= prev)
        {
            time += houses.front() - prev;
        }
        else
        {
            time += n - (prev - houses.front());
        }
    } while (houses.size() > 1);
    cout << time << endl;
    return 0;
}