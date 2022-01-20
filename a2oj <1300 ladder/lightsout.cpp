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

void toggle(int a[3][3], int i, int j)
{
    if(i == 0 && j == 0){
        a[i][j]  = a[i][j] == 0 ? 1 : 0;
        a[i][j+1] = a[i][j+1] == 0 ? 1 : 0;
        a[i+1][j] = a[i+1][j] == 0 ? 1 : 0;
    }
    if(i == 2 && j == 2){
        a[i][j]  = a[i][j] == 0 ? 1 : 0;
        a[i][j-1] = a[i][j-1] == 0 ? 1 : 0;
        a[i-1][j] = a[i-1][j] == 0 ? 1 : 0;
    }
    if(i == 0 && j == 2){
        a[i][j]  = a[i][j] == 0 ? 1 : 0;
        a[i+1][j] = a[i+1][j] == 0 ? 1 : 0;
        a[i][j-1] = a[i][j-1] == 0 ? 1 : 0;
    }
    if(i == 2 && j == 0){
        a[i][j]  = a[i][j] == 0 ? 1 : 0;
        a[i-1][j] = a[i-1][j] == 0 ? 1 : 0;
        a[i][j+1] = a[i][j+1] == 0 ? 1 : 0;
    }
    if(i == 1 && j == 1){
        a[i][j]  = a[i][j] == 0 ? 1 : 0;
        a[i-1][j] = a[i-1][j] == 0 ? 1 : 0;
        a[i+1][j] = a[i+1][j] == 0 ? 1 : 0;
        a[i][j-1] = a[i][j-1] == 0 ? 1 : 0;
        a[i][j+1] = a[i][j+1] == 0 ? 1 : 0;
    }

    if(i == 0 && j == 1){
        a[i][j]  = a[i][j] == 0 ? 1 : 0;
        a[i+1][j] = a[i+1][j] == 0 ? 1 : 0;
        a[i][j-1] = a[i][j-1] == 0 ? 1 : 0;
        a[i][j+1] = a[i][j+1] == 0 ? 1 : 0;
    }

    if(i == 1 && j == 0){
        a[i][j]  = a[i][j] == 0 ? 1 : 0;
        a[i-1][j] = a[i-1][j] == 0 ? 1 : 0;
        a[i+1][j] = a[i+1][j] == 0 ? 1 : 0;
        a[i][j+1] = a[i][j+1] == 0 ? 1 : 0;
    }

    if(i == 1 && j == 2){
        a[i][j]  = a[i][j] == 0 ? 1 : 0;
        a[i-1][j] = a[i-1][j] == 0 ? 1 : 0;
        a[i+1][j] = a[i+1][j] == 0 ? 1 : 0;
        a[i][j-1] = a[i][j-1] == 0 ? 1 : 0;
    }

    if(i == 2 && j == 1){
        a[i][j]  = a[i][j] == 0 ? 1 : 0;
        a[i-1][j] = a[i-1][j] == 0 ? 1 : 0;
        a[i][j-1] = a[i][j-1] == 0 ? 1 : 0;
        a[i][j+1] = a[i][j+1] == 0 ? 1 : 0;
    }
}
int main()
{
    int a[3][3];
    int ans[3][3] = {
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            a[i][j] = a[i][j] % 2;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            while(a[i][j]--)
            {
                toggle(ans, i, j);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}