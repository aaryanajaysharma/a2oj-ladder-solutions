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
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'y' && s[i] != 'Y') && islower(s[i]))
        {
            cout << ".";
            cout << s[i];
        }
        else if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'y' && s[i] != 'Y' && isupper(s[i]))
        {
            cout << ".";
            char c = tolower(s[i]);
            cout << c;
        }
    }
    return 0;
}
