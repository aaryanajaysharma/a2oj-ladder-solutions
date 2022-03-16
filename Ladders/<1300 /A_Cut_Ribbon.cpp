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

int maximum_cut(int v[], int n, int a, int b, int c)
{
    if (n < c || n < 0)
        return INT32_MIN;
    if (v[n] != -1)
        return v[n];
    v[n] = max({maximum_cut(v, n - a, a, b, c), maximum_cut(v, n - b, a, b, c), maximum_cut(v, n - c, a, b, c)}) + 1;
    return v[n];
}
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int big, mid, smol;
    big = max({a, b, c}), smol = min({a, b, c});
    mid = a + b + c - big - smol;
    a = big, b = mid, c = smol;
    int v[4001];
    fill(v, v + 4001, -1);
    v[c] = 1;
    b % c == 0 ? v[b] = b / c : v[b] = 1;
    if (a % gcd(b, c) == 0)
    {
        if (a % c == 0)
        {
            v[a] = a / c;
        }
        else if (a % b == 0)
        {
            v[a] = a / b;
        }
        else
        {
            int max_count = INT32_MIN;
            for (int i = 1; i <= a; i++)
            {
                for (int j = 1; j <= a; j++)
                {
                    if (i * b + j * c == a)
                    {
                        max_count = max(max_count, i + j);
                        v[a] = max_count;
                    }
                }
            }
        }
    }
    if (v[a] == -1)
        v[a] = 1;
    v[0] = 0;
    cout << maximum_cut(v, n, a, b, c) << "\n";
    return 0;
}