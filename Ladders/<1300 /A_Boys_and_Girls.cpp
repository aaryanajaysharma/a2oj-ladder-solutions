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
#define watch(x) cout << #x << " = " << x << "\n"
#define pb emplace_back
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define ll long long int
#define ld long double
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    bool flag = true;
    n > m ? flag = false : flag = true;
    for (int i = 0; i < min(n, m); i++)
    {
        flag ? cout << "GB" : cout << "BG";
    }
    for (int i = 0; i < max(n, m) - min(n, m); i++)
    {
        flag ? cout << "G" : cout << "B";
    }
    cout << "\n";
    return 0;
}