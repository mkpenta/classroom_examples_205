/*
Michael Penta

*/

#include <stdio.h>

int main() 
{
	int n = 0;
    puts("Enter a number");
    scanf("%d",&n);
    printf("You entered %d\n", n);

    if(n % 3 == 0)
    {
        if(n % 2 == 0)
        {
            puts("multiple of 3 and 2");
        }
    }
    
    if(n % 3 == 0 && n % 2 == 0)
    {
            puts("multiple of 3 and 2");
    }
    
}
