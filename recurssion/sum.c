#include <stdio.h>  //printf(), scanf()

int sum(int);

int main (void)
{
  int x = sum(5);
  printf("%d\n", x);
}

int sum(int limit)
{
  int sum=0;
  for(int i = 0; i < limit; i++)
  {
    sum = sum + i;
  }
  return sum;
}
