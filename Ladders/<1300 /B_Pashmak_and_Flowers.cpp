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
    int *a = new int[n];
    int m = INT32_MAX, M = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > M)
        {
            M = a[i];
        }
        if (a[i] < m)
        {
            m = a[i];
        }
    }
    int m_count = 0, M_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == m)
        {
            m_count++;
        }
        if (a[i] == M)
        {
            M_count++;
        }
    }
    long long product;
    m != M ? product = ((long long)m_count) * ((long long)M_count) : product = ((long long)m_count) * ((long long)(m_count - 1)) / 2;
    cout << M - m << " " << product << endl;
    return 0;
}