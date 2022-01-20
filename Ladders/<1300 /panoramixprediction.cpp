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

bool check_prime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    if (!check_prime(m))
    {
        cout << "NO" << endl;
    }
    else
    {
        int next_prime = n + 1;
        do
        {
            if (check_prime(next_prime))
            {
                if (next_prime == m)
                {
                    cout << "YES\n";
                    break;
                }
                else
                {
                    cout << "NO\n";
                    break;
                }
            }
            else
                next_prime++;
        } while (1);
    }
    return 0;
}