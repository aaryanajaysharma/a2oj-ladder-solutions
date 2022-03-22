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

int main()
{
    // if x is the position, then x>a and x<b
    int n, a, b;
    cin >> n >> a >> b;
    if (n - a <= b)
    {
        cout << n - a;
    }
    else
        cout << b + 1 << endl;
    return 0;
}