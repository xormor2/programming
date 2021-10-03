#include <stdio.h>
#include <unistd.h>

#define LOOP(t, v, c) t##v(c)

void main(void)
{
  int k=0;
  LOOP(for,,;;)
  LOOP(for,k,);
  printf("%d\n", k);
}
