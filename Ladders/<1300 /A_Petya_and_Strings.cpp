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
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (islower(s1[i]))
        {
            s1[i] = toupper(s1[i]);
        }
        // sum1 += s1[i];
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (islower(s2[i]))
        {
            s2[i] = toupper(s2[i]);
        }
    }

    int flag = 0;
    for (int i = 0;; i++)
    {
        if (s1 == s2)
            break;

        if (s1[i] > s2[i])
        {
            flag++;
            break;
        }
        else if (s1[i] < s2[i])
        {
            flag--;
            break;
        }
    }

    cout << flag << '\n';

    return 0;
}