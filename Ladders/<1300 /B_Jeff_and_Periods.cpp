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
    int n;
    cin >> n;
    vector<int> a[100001];

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x].push_back(i);
    }
    map<int, int> answer;
    for (int i = 0; i < 100001; i++)
    {
        if (a[i].size() == 0)
        {
            continue;
        }
        else if (a[i].size() == 1)
        {
            answer[i] = 0;
        }
        else
        {
            bool flag = true;
            int d = a[i][1] - a[i][0];
            for (int j = 0; j < a[i].size() - 1; j++)
            {
                if (a[i][j + 1] - a[i][j] != d)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                answer[i] = d;
            }
        }
    }
    cout << answer.size() << endl;
    for (auto it = answer.begin(); it != answer.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}