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
#define ll int
#define ld long double
#define M 1073741824
using namespace std;
vector<ll> numDivisors;
void cntDivisors(ll n){
	ll cnt = 1;
	ll curr = 0;
	for(ll i=2; i*i<=n; i++){
		if(n%i==0){
			while(n%i==0){
				curr++;
				n/=i;
			}
			cnt *= (curr+1);
			curr = 0;
		}
	}
	if(n>1) cnt *= 2;
	numDivisors.push_back(cnt);
}
int main()
{

    int sum = 0;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 1; i <= a*b*c; i++)
        {
            cntDivisors(i);
        }
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                sum = (sum+numDivisors[i * j * k - 1]) % M;
            }
        }
    }
    cout << sum << "\n";
    return 0;
}