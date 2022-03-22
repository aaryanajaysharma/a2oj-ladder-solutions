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
    int capacity = 0, people = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        people -= a;
        people += b;
        if (capacity < people)
        {
            capacity = people;
        }
        // cout << capacity << " ";
    }
    cout << capacity << endl;

    return 0;
}