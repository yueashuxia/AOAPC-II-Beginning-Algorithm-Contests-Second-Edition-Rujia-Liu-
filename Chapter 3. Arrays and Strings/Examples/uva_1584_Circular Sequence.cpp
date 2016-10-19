//#define LOCAL

#include<cstdio>
#include<cstring>
#include<cmath>
#include<ctime>
#include<iostream>
using namespace std;

int compare_str(char* str, int p, int q)
{
    int n = strlen(str);
    for(int i = 0; i < n; i++)
    {
        if(str[(i+p)%n] > str[(i+q)%n])
        {
            return 1;    
        }
        else if(str[(i+p)%n] < str[(i+q)%n])
        {
            return -1;
        }
    }
    return 0;
}

int main()
{
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int T;
    char str[105];
    scanf("%d", &T);
    while(T--)
    {
        int res = 0;
        scanf("%s", str);
        int len = strlen(str);
        for(int i = 1; i < len; i++)
        {
            if(compare_str(str, i, res) == -1)
            {
                res = i;
            }
        }
        for(int i = 0; i < len; i++)
        {
            putchar(str[(i+res)%len]);
        }
        putchar('\n');
    }
    return 0;
}
