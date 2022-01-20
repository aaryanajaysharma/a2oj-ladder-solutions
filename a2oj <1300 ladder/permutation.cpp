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
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int f = 0;
        vector<long long int> v;
        for (int g = 0; g < 13; g++)
        {
            for (int h = g + 1; h < 14; h++)
            {
                for (int i = h + 1; i < 15; i++)
                {
                    for (int j = i + 1; j < 16; j++)
                    {
                        for (int k = j + 1; k < 17; k++)
                        {
                            for (int l = k + 1; l < 18; l++)
                            {
                                for (int m = l + 1; m < 19; m++)
                                {
                                    for (int n = m + 1; n < 20; n++)
                                    {
                                        long long int q = (1 << i) + (1 << j) + (1 << k) + (1 << l) + (1 << m) + (1 << n) + (1 << g) + (1 << h);
                                        v.push_back(q);
                                        if (v.size() == 1000)
                                        {
                                            f = 1;
                                            break;
                                        }
                                    }
                                    if (f == 1)
                                    {
                                        break;
                                    }
                                }
                                if (f == 1)
                                {
                                    break;
                                }
                            }
                            if (f == 1)
                            {
                                break;
                            }
                        }
                        if (f == 1)
                        {
                            break;
                        }
                    }
                    if (f == 1)
                    {
                        break;
                    }
                }
                if (f == 1)
                {
                    break;
                }
            }
            if (f == 1)
            {
                break;
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}