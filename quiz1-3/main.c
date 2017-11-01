/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/

#include <stdio.h>

int main() 
{
	int num1, num2;
    //puts("Enter a two int");
    //scanf(" %d %d",&num1, &num2);
     printf("%d %d\n", num1, num2);
    
    int sum = num1 + num2;
    int prod = num1 * num2;
    int dif = num1 - num2;
    int dq = num1/num2;
    float fq = num1/(float)num2;
    int rem = num1 % num2;
    
    printf("%d %d %d %d %d %d %f %d\n", num1, num2, sum, prod, dif, dq, fq, rem);
    
    
}
