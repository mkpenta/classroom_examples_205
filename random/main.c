/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int n = 0;
	
	srand(time(NULL));

    int count = 0;
    for(int i = 0; i < 10000000 ; i++)
    {
        n  = rand() % 6 + 1;
        if(n < 1 || n > 5)
        {
        
            ++count;
        }
    }
    printf("%d\n", count);
}
