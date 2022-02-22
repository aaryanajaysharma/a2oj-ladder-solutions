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
    string s = "12345";
    int a[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    int max = INT32_MIN;
    do
    {
        int sum = 0;
        string k = s;
        sum += a[k[0] - '0' - 1][k[1] - '0' - 1];
        sum += a[k[1] - '0' - 1][k[0] - '0' - 1];
        sum += a[k[2] - '0' - 1][k[3] - '0' - 1];
        sum += a[k[3] - '0' - 1][k[2] - '0' - 1];
        sum += a[k[1] - '0' - 1][k[2] - '0' - 1];
        sum += a[k[2] - '0' - 1][k[1] - '0' - 1];
        sum += a[k[3] - '0' - 1][k[4] - '0' - 1];
        sum += a[k[4] - '0' - 1][k[3] - '0' - 1];
        sum += a[k[2] - '0' - 1][k[3] - '0' - 1];
        sum += a[k[3] - '0' - 1][k[2] - '0' - 1];
        sum += a[k[3] - '0' - 1][k[4] - '0' - 1];
        sum += a[k[4] - '0' - 1][k[3] - '0' - 1];
        if (sum > max)
        {
            max = sum;
        }
    } while (next_permutation(s.begin(), s.end()));
    cout << max << endl;
    return 0;
}