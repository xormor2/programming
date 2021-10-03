#include <stdio.h>
int main()
{
int a=0, b=1, d=0; //, not_equal=0;

(a>b)?d=0:1;
(a<b)?d=1:1;
(a==b)?d=2:1;

printf("d=%d\n", d);
//printf("not_equal = %d", not_equal);
return 0;
}
