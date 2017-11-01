#include <stdio.h>  //printf(), scanf()


int main (void)
{
  int x = sum(3);
  printf("%d\n", x);
}

int sum(int n)
{
  if(n > 0)
  {
    return n + sum(n-1);
  }
  else
  {
    return n;
  }
  
}
