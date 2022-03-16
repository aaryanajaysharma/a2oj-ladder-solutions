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
    int n, k;
    cin >> n >> k;
    vector<int> csum;
    int sum = 0, min_sum = INT32_MAX, min_index = 0;
    bool flag = false;
    csum.push_back(sum);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        csum.push_back(sum);
    }
    for (int i = 0; i <= n - k; i++)
    {
        if (csum[i + k] - csum[i] < min_sum)
        {
            min_sum = csum[i + k] - csum[i];
            min_index = i;
        }
    }
    cout << min_index + 1 << "\n";
    return 0;
}