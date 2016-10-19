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
    int N;
    char str[85];
    scanf("%d", &N);
    while(N--)
    {
        scanf("%s", str);    
        int len = strlen(str);
        int p = 0;
        for(p = 1; p <= len; p++)
        {
            if(len%p != 0) continue;
            bool flag = true;
            char patern[p+1];
            for(int i = 0; i < p; i++)
            {
                patern[i] = str[i];
            }
            patern[p] = '\0';
            
            for(int i = p; i < len; i+= p)
            {
                for(int j = i; j < i+p; j++)
                {
                    if(str[j] != patern[j-i])
                    {
                        flag = false;
                        break;    
                    }
                }    
                if(flag == false)
                {
                    break;
                }
            }   
            if(flag)
            {
                printf("%d\n", p);    
                break;
            }
        }
        if(N > 0) printf("\n");
    }
    return 0;
}
