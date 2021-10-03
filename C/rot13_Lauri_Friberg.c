//Explanation of C language code:
//Simple rot13 using lowercase ASCII letter 'a' to be replaced by 'n' and 'n' to be replaced by 'a'
//License:
//Copyleft Lauri K. Friberg 2021, September the 3rd at 08:42 P.M.

#include <stdio.h>
int main()
{
char c = 'a';
char d = ((c - 'a') % 26) - (13 + 'a');
printf("%c\n", d);
char e = ((d - 'a') % 26) + (13 + 'a');
printf("%c\n", e);
return 0;
}
