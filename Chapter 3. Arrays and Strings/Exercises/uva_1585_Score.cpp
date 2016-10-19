//#define LOCAL

#include<cstdio>
#include<cstring>
#include<cmath>
#include<ctime>
#include<iostream>
using namespace std;

int main()
{
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int T;
    scanf("%d", &T);
    char str[85];
    while(T--)
    {
        scanf("%s", str);
        int len = strlen(str);
        int score = 0;
        int res = 0;
        for(int i = 0; i < len; i++)
        {
            if(str[i] == 'O')
            {
                score++;
            }
            else
            {
                score = 0;
            }
            res += score;
        }
        printf("%d\n", res);
    }
    return 0;
}
