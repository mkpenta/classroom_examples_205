

#include <stdio.h>
int mysteryA(int a);
int mysteryB(int a, int b);
int mysteryC(int b);

int main() 
{
    int a = 1;
    int b = 2;
    int c = 1;
    
    int result = mysteryA(a) + mysteryB(b, c);

    printf("%d\n", result);
}


int mysteryA(int a)
{
    a++;
    int n = a + 1;
    return a;
}

int mysteryB(int a, int b)
{
    int c = a + b * 1/2 + mysteryC(b);
    return c;
}

int mysteryC(int a)
{
    int b = a;
    a++;
    b++;
    return b;
}
