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
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int x, y, n;
    cin >> x >> y >> n;
    int a[6] = {x - y, x, y, y-x, -x, -y};
    a[n%6]>=0?cout << a[n%6]%M <<"\n":cout << (M + a[n%6]%M)%M << "\n";
    return 0;
}