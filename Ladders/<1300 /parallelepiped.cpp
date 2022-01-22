#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<queue>
#include<math.h>
#include<stdlib.h>
#include<deque>
using namespace std;

int main()
{
    int ab, bc, ca;
    cin >> ab >> bc >> ca;
    int b = sqrt(ab*bc/ca);
    int a = sqrt(ab*ca/bc);
    int c = sqrt(bc*ca/ab);
    cout << 4*(a+b+c) << endl;
    return 0;
}