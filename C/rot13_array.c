//Explanation of C language code:
//Simple rot13 using lowercase ASCII letter 'a' to be replaced by 'n' and 'n' to be replaced by 'a'
//License:
//Copyleft Lauri K. Friberg 2021, September the 3rd at 08:42 P.M.

#include <stdio.h>
int main()
{
char c[256] = "abc";
char d[256], e[256];

int i=0;
while(c[i]!='\0')
{
	d[i] = (char)((c[i] + 13 - 'a') % 26 + 'a');
	i++;
}
printf("%s\n", d);

i=0;
while(d[i]!='\0')
{
	e[i] = (char)((d[i] + 13 - 'a') % 26 + 'a');
	i++;
}
printf("%s\n", e);
	
return 0;
}
