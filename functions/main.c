/*
Michael Penta
Project/Assignemnt/Lab example
Make an odd and even tester funtion*/

#include <stdio.h>

int keepAlive(int n);
static int globalvar = 0;

#define NUMBER 3

int main() 
{

    static int m = 3;
    printf("%d\n", m);
    
    keepAlive(2);
}


int keepAlive(int n)
{
    static int m = 0;
    
    printf("%d\n", m);
    
   return m = n + m;
}



//input number to test
//return1 1 for odd and o for even
//mod 
int isOdd(int n)
{
    int result = 1;
    if(n % 2 == 0)
    {
        //even
       result=0;
    }
    return result;
}

//int number
//multiple by 3
int mult3 (int n)
{
    int result = 0;
       result = n * 3;
    n = n * 3;
 
    return result;
}