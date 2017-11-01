/*
*/

#include <stdio.h>

int main() {
    
    int numbers [10] = {1, 2};
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d, ", numbers[i]);
    }
    puts(" ");
    
    for(int j = 0; j<10;j++)
    {
        numbers[j] = j + 1;
    }
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d, ", numbers[i]);
    }
    puts(" ");
    
    
    for(int j = 0; j<10;j++)
    {
        int n;
        puts("Enter a number");
        scanf("%d", &n);
        
        numbers[j] = n;
    }
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d, ", numbers[i]);
    }
    puts(" ");
    /*
	int n = 0;
    puts("Enter a number");
    scanf("%d",&n);
    printf("You entered %d\n", n);
*/
    
}
