/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/

#include <stdio.h>

#define PI 3.1415

int main() 
{
	int n = 0;
    puts("Enter a number");
    scanf("%d",&n);
    
    switch(n)
    {
        case 0: 
            puts("zero option");
            break;
        case 1: 
            puts("1 option");
            break;
        case 2:
            puts("2 option");
            break;
        default:
            puts("not a choice");
            break;   
    }
    
    int c = 0;
    puts("Enter y or n");
    scanf("%c",&c);
    
    switch(c)
    {
        case 'y': 
        case 'Y': 
           puts("you answered yes");
            break; 
        case 'n': 
        case 'N': 
           puts("you answered no");
            break; 
        default:
            puts("not a choice");
            break;   
    }
    /*
    if(n == 0)
    {
        
    }
    else if(n == 1)
    {
        
        
    }
    else if(n == 2)
    {
        
        
    }
    else
    {
        
    }
    */
        
    
   
}
