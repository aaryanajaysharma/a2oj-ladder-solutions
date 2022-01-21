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
struct coordinate
{
    int x;
    int y;
};
int main()
{
    int n;
    cin >> n;

    vector<coordinate> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].x;
        cin >> a[i].y;
    }
    int number_of_supercentral = 0;
    for (int i = 0; i < n; i++)
    {
        bool up = false, right = false, down = false, left = false;

        for (int j = 0; j != i, j < n; j++)
        {
            if (a[j].x == a[i].x && a[j].y > a[i].y)
                up = true;
            if (a[j].x == a[i].x && a[j].y < a[i].y)
                down = true;
            if (a[j].y == a[i].y && a[j].x < a[i].x)
                left = true;
            if (a[j].y == a[i].y && a[j].x > a[i].x)
                right = true;

            if (up && down && left && right)
            {
                break;
            }
        }
        if (up && down && left && right)
        {
            number_of_supercentral++;
        }
    }

    cout << number_of_supercentral << endl;
    return 0;
}