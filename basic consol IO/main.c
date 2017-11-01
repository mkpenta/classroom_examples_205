/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/

#include <stdio.h>

int main() 
{
    int num3=0;
    int num1 = 97;
    float num2 = 3.1415;
    char letter = 'a';
  /-----------------------------------------------  
    //format specifiers - %d = int, %c = char, %f = float
     printf("num1 is %d\nnum2 is %f\nand letter is %c \n", letter, num2, num1);
    
    //printf("%s\n","Hello");
    //use puts for sting literals
    puts("hello");
    
    puts("Enter 2 number");
    scanf(" %d%d", &num1, &num3);
    
 printf("num1 is %d\nnum3 is %d\n",num3, num1);
}    
