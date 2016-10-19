//#define LOCAL

#include<cstdio>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cctype>
#include<iostream>
using namespace std;

int main()
{
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int T;
    char str[85];
    double mass[256];

    memset(mass, 0, sizeof(mass));
    mass['C'] = 12.01;
    mass['H'] = 1.008;
    mass['O'] = 16.00;
    mass['N'] = 14.01;

    scanf("%d", &T);
    while(T--)
    {
        scanf("%s", str);
        int len = strlen(str);
        double res = 0;
        int num = 0;
        for(int i = 1; i < len; i++)
        {
            if(isalpha(str[i]))
            {
                if(isalpha(str[i-1]))
                {
                    res += mass[str[i-1]];
                    #ifdef LOCAL
                    printf("%c %d\n", str[i-1], 1);
                    #endif
                }
                else
                {
                    for(int j = i-2; j >= 0; j--)
                    {
                        if(isalpha(str[j]))
                        {
                            res += num*mass[str[j]];
                            #ifdef LOCAL
                            printf("%c %d\n", str[j], num);
                            #endif
                            break;
                        }
                    }
                }
                num = 0;
            }
            else
            {
                num = num*10+(str[i]-'0');
            }
        }
        if(isalpha(str[len-1]))
        {
            res += mass[str[len-1]];
            #ifdef LOCAL
            printf("%c %d\n", str[len-1], 1);
            #endif
        }
        else
        {
            for(int j = len-2; j >= 1; j--)
            {
                if(isalpha(str[j]))
                {
                    res += num*mass[str[j]];
                    #ifdef LOCAL
                    printf("%c %d\n", str[j], num);
                    #endif
                    break;
                }
            }
        }
        printf("%.3lf\n", res);
    }
    return 0;
}
