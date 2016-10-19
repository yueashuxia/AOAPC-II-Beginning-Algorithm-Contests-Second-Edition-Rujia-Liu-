#include<stdio.h>

int main()
{
	char c;
	bool change = true;
	while((c = getchar())!=EOF)
	{
		if(c == '\"')
		{
			printf("%s", change?"``":"''");
			change = !change;
		}
		else
		{
			putchar(c);
		}
	}
	return 0;
}
