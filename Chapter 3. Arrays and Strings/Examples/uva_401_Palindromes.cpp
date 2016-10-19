//#define LOCAL

#include<cstdio>
#include<cstring>
#include<cmath>
#include<ctime>
#include<iostream>
using namespace std;

bool isPalindrome(char *s)
{
    int len = strlen(s);
    for(int i = 0; i <= len/2; i++)
    {
        if(s[i] != s[len-1-i])
        {
            return 0;
        }
    }
    return 1;
}

char mirror[36] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

bool isMirror(char *s)
{
    int len = strlen(s);
    for(int i = 0; i <= len/2; i++)
    {
        if(isdigit(s[i]))
        {
            //printf("\n s[i] = %c, mirror = %c\n", s[i], mirror[s[i]-'0'+25]);
            if(s[len-1-i] != mirror[s[i]-'0'+25])
            {
                return 0;
            }
        }
        else
        {
            //printf("\n s[i] = %c, mirror = %c\n", s[i], mirror[s[i]-'A']);
            if(s[len-1-i] != mirror[s[i]-'A'])
            {
                return 0;
            }    
        }
        
    }
    return 1;   
}

int main()
{
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    char str[25];
    while(scanf("%s", str) != EOF)
    {
        printf("%s", str);
        bool isM = isMirror(str);
        bool isP = isPalindrome(str);
        if(isM && isP)
        {
            printf(" -- is a mirrored palindrome.\n");
        }
        else if(isP)
        {
            printf(" -- is a regular palindrome.\n");    
        }
        else if(isM)
        {
            printf(" -- is a mirrored string.\n");  
        }
        else
        {
            printf(" -- is not a palindrome.\n"); 
        }
        printf("\n");
    }


    return 0;
}
