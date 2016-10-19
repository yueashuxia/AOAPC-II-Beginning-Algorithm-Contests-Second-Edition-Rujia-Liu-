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
    int T, n;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        int count[10] = {0};
        for(int i = 1; i <= n; i++)
        {
            int t = i;
            while(t > 0)
            {
                count[t%10]++;
                t /= 10;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", count[0], count[1], count[2], count[3], count[4], count[5], count[6], count[7], count[8], count[9]);
    }
    //system("pause");
    return 0;
}
