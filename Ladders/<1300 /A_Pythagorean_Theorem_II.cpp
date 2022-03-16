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

bool check_sqaure(int n){
    int x = sqrt(n);
    if(x*x == n){
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int x = n, y = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if(i*i+j*j <= n*n && check_sqaure(i*i+j*j)){
                count++;
            }
        }
    }
    cout << count <<"\n";
    return 0;
}