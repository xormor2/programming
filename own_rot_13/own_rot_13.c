#include <stdio.h>

#define NUMBER_OF_CHARS 256

int main()
{
char a[NUMBER_OF_CHARS], b[NUMBER_OF_CHARS];

scanf("%s",a);

int i=0;
while(a[i]!='\0')
{
    b[i]=a[i]+13;
    i++;
}

printf("%s\n",b);

return 0;
}
