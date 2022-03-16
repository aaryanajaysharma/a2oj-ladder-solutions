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
#include <numeric>
#define watch(x) cout << #x << " = " << x << "\n"
#define pb emplace_back
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define ll long long int
#define ld long double
using namespace std;

void flip(vector<string> &a)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (a[i][j] == '#')
            {
                a[i][j] = '.';
            }
            else
            {
                a[i][j] = '#';
            }
        }
    }
}

bool equal(vector<string> b)
{
    int count = 0;
    for (int p = 0; p < 2; p++)
    {
        for (int q = 0; q < 2; q++)
        {
            if (b[p][q] == '#')
            {
                count++;
            }
        }
    }
    if (count == 4 || count == 3)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    vector<string> a;
    for (int i = 0; i < 4; i++)
    {
        string s;
        cin >> s;
        a.push_back(s);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            vector<string> b;
            b.push_back(a[i].substr(j, 2));
            b.push_back(a[i + 1].substr(j, 2));
            if (equal(b))
            {
                cout << "YES\n";
                return 0;
            }
            else
            {
                flip(b);
                if (equal(b))
                {
                    cout << "YES\n";
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";
    return 0;
}