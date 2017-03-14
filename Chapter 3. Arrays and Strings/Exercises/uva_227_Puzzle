#include<cstdio>
#include<cstring>
#include<cmath>
#include<ctime>
#include<iostream>
using namespace std;

int main()
{
    char puzzle[10][10];
    char moves[1000];
    char temp[100];
    int x = 0, y = 0, caseNum = 1;
    while(true)
    {
        gets(puzzle[0]);
        if(strcmp(puzzle[0],"Z") == 0)
        {
            break;
        }
        for(int i = 1; i < 5; i++)
        {
            gets(puzzle[i]);
        }
        for(int i = 0; i < 5; i++)
        {
            if(strlen(puzzle[i]) == 4)
            {
                puzzle[i][4] = ' ';
                puzzle[i][5] = '\0';
                x = i;
                y = 4;
                //printf("x = %d, y = %d\n", x, y);
            }
            else
            {
                for(int j = 0; j < 5; j++)
                {
                    if(puzzle[i][j] == ' ')
                    {
                        x = i;
                        y = j;
                        //printf("x = %d, y = %d\n", x, y);
                    }
                }
            }
        }

        moves[0] = '\0';
        while(true)
        {
            gets(temp);
            strcat(moves, temp);
            int len = strlen(temp);
            if(temp[len-1] == '0')
            {
                //printf("%s\n", moves);
                break;
            }
        }
        bool bValid = true;
        for(int i = 0; moves[i] != '0'; i++)
        {
            if(moves[i] == 'A')
            {
                if(x - 1 < 0)
                {
                    bValid = false;
                    break;
                }
                else
                {
                    puzzle[x][y] = puzzle[x-1][y];
                    puzzle[x-1][y] = ' ';
                    x--;
                }
            }
            else if(moves[i] == 'B')
            {
                if(x + 1 >= 5)
                {
                    bValid = false;
                    break;
                }
                else
                {
                    puzzle[x][y] = puzzle[x+1][y];
                    puzzle[x+1][y] = ' ';
                    x++;
                }
            }
            else if(moves[i] == 'R')
            {
                if(y + 1 >= 5)
                {
                    bValid = false;
                    break;
                }
                else
                {
                    puzzle[x][y] = puzzle[x][y+1];
                    puzzle[x][y+1] = ' ';
                    y++;
                }
            }
            else if(moves[i] == 'L')
            {
                if(y - 1 < 0)
                {
                    bValid = false;
                    break;
                }
                else
                {
                    puzzle[x][y] = puzzle[x][y-1];
                    puzzle[x][y-1] = ' ';
                    y--;
                }
            }
            else
            {
                bValid = false;
                break;
            }
        }
        if(caseNum > 1)
        {
            printf("\n");
        }
        printf("Puzzle #%d:\n", caseNum++);
        if(bValid)
        {
            for(int i = 0; i < 5; i++)
            {
                for(int j = 0; j < 5; j++)
                {
                    if(j == 0)
                    {
                        printf("%c", puzzle[i][j]);
                    }
                    else
                    {
                        printf(" %c", puzzle[i][j]);
                    }
                }
                printf("\n");
            }
        }
        else
        {
            printf("This puzzle has no final configuration.\n");
        }
    }

    return 0;
}
