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
    string s1, s2, s3 = "";
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        s3 += to_string((s1[i] - '0') ^ (s2[i] - '0'));
    }
    cout << s3 << endl;
    return 0;
}