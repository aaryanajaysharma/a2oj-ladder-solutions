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
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    int size = n;
    do
    {
        // watch(sum%n);
        if (sum % n == 0)
        {
            cout << n << "\n";
            return 0;
        }
        if ((sum - sum % size) % n == 0)
        {
            cout << n - 1 << "\n";
            return 0;
        }
        n--;
    } while (n > 0);
    return 0;
}