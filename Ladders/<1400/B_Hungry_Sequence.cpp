#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<queue>
#include<math.h>
#include<stdlib.h>
#include<deque>
#define watch(x) cout << #x << " = " << x << endl
using namespace std;
bool check_prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int i = 2;
    while(n){
        if(check_prime(i)){
            cout << i << " ";
            n--;
        }
        i++;
    }
    return 0;
}