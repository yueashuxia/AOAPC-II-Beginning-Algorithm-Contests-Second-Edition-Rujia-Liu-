#include<stdio.h>
#include<ctype.h>

char digitHash[] = "9`12345678";
char alphaHash[] = "AVXSWDFGUHJKNBIOQEARYCQZTZ";

int main()
{
	char c;
	while((c = getchar())!=EOF)
	{
		if(isalpha(c))
		{
			putchar(alphaHash[c-'A']);
		}
		else if(isdigit(c))
		{
			putchar(digitHash[c-'0']);
		}
		else if(c == '-')
		{
			putchar('0');
		}
		else if(c == '=')
		{
			putchar('-');
		}
		else if(c == '[')
		{
			putchar('P');
		}
		else if(c == ']')
		{
			putchar('[');
		}
		else if(c == '\\')
		{
			putchar(']');
		}
		else if(c == ';')
		{
         	 putchar('L');     
        }
        else if(c == '\'')
        {
		 	 putchar(';');
		 }
		 else if(c == ',')
		 {
		  	  putchar('M');
	     }
	     else if(c == '.')
	     {
		  	  putchar(',');
  		  }
  		  else if(c == '/')
  		  {
		   	   putchar('.');
		}
		else
		{
		 	putchar(c);
		}
	}
	return 0;
}
