#define LOCAL

#include<cstdio>
#include<cstring>
#include<cmath>
#include<ctime>
#include<iostream>
using namespace std;

int gen[100005];
int generate(int num)
{
    int res = num;
    while(num > 0)
    {
        res+= num%10;
        num/=10;
    }
    return res;
}
int main()
{
  #ifdef LOCAL
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  
  memset(gen, 0, sizeof(gen));
  for(int i = 1; i < 100001; i++)
  {
        int res = generate(i);
        if(gen[res] == 0)
        {
            gen[res] = i;
        }
  }
  
  int T;
  scanf("%d", &T);
  while(T--)
  {
        int n;
        scanf("%d", &n);  
        printf("%d\n", gen[n]);    
  }
  
  return 0;
}
