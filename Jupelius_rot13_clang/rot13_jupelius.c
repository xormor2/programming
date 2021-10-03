#include <stdio.h>
#define r(x) ((c-x+13)%26+x)
int main(){char c; for(;(c=getchar())!=EOF;putchar(c>='A'&&c<='Z'?r('A'):c>='a'&&c<='z'?r('a'):c)); return 0;}
