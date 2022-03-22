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
    long long int n;
    cin >> n;
    unordered_map<long long int, long long int> umap;
    for (long long int i = 0; i < n; i++)
    {
        long long int a;
        cin >> a;
        umap[a] = i;
    }
    long long int m;
    cin >> m;
    long long int *b = new long long int[m];
    for (long long int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    long long int vasya = 0;
    long long int petya = 0;

    for (long long int i = 0; i < m; i++)
    {
        long long int comparisons = 1;

        auto it = umap.find(b[i]);
        comparisons = +it->second + 1;
        vasya += comparisons;
        petya += n - comparisons + 1;
    }
    cout << vasya << " " << petya << endl;
    return 0;
}