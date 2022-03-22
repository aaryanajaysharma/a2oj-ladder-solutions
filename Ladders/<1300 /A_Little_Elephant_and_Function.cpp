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
    int n;
    cin >> n;
    cout << n << " ";
    for (int i = 1; i < n; i++)
    {
        i != n - 1 ? cout << i << " " : cout << i;
    }
    return 0;
}