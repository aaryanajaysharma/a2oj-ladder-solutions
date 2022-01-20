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
    int y;
    cin >> y;
    bool flag = false;
    y++;
    while (!flag)
    {
        int first = y % 10;
        int second = (y / 10) % 10;
        int third = (y / 100) % 10;
        int fourth = (y / 1000) % 10;
        if (first == second || second == third || third == fourth || fourth == first || first == third || second == fourth)
        {
            y++;
        }
        else
        {
            flag = true;
            cout << y << endl;
            break;
        }
    }
}