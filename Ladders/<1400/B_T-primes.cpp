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
bool check_prime(ll n){
    if(n == 2) return true;
    if(n == 1) return false;
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--){
        ll x;
        cin >> x;
        ll sqrtx = sqrt(x);
        if(1ll*sqrtx*sqrtx == x){
            if(check_prime(sqrtx)){
                cout << "YES\n";
                continue;
            }
        }
        cout <<"NO\n";
    }
    return 0;
}