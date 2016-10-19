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
      int n, gameNo = 1;
      while(scanf("%d", &n)&&n)
      {
            int code[n];
            for(int i = 0; i < n; i++)
            {
                scanf("%d", &code[i]);
            }
            printf("Game %d:\n", gameNo++);
            while(true)
            {
                int copy[n], guess[n], strong = 0, weak = 0;
                bool finish = true;
                for(int i = 0; i < n; i++)
                {
                    scanf("%d", &guess[i]);
                    if(guess[i] != 0)
                    {
                        finish = false;
                    }
                }
                if(finish)
                {
                    break;
                }
                else
                {
                    for(int i = 0; i < n; i++)
                    {
                        copy[i] = code[i];
                        if(copy[i] == guess[i])
                        {
                            strong++;
                            copy[i] = guess[i] = 0;
                        }
                    }
                    for(int i = 0; i < n; i++)
                    {
                        if(guess[i] == 0) continue;
                        for(int j = 0; j < n; j++)
                        {
                            if(copy[j] == 0) continue;
                            if(guess[i] == copy[j])
                            {
                                weak++;
                                copy[j] = 0;
                                break;
                            }
                        }
                    }
                    printf("    (%d,%d)\n", strong, weak);
                }
            }
	  }
      
      return 0;
  }
