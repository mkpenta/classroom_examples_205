/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/

#include <stdio.h>
#include <limits.h>

int main() {
	int n = 0;
    puts("Enter a 3 digit number");
    scanf("%d",&n);
    printf("You entered %d\n", n);
    
    int ones = 0, tens = 0, hundreds = 0;
    ones = n % 10;
    tens  = (n % 100)/10;
    hundreds = n / 100;
    
    printf(" %d \n%d\n %d \n", hundreds, tens, ones);
    printf(" %d", INT_MAX);
    
}
