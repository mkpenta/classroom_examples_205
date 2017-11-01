#include <stdio.h>

void printArray(int[], int);
void mystery(int[], int, int);
int main() 
{
    int number =0;
    int data[] ={1,2,3};
    
    printArray(data, 3);
    mystery(data,3, number);
    mystery(data,3, number);
    printArray(data,3);
}

void printArray(int list[], int size)
{
    printf("{ %d", list[0]);
    for(int i = 1; i < size; i++)
    {
        printf(", %d", list[i]);
    }
    puts(" }");
    
}
void mystery(int list[],int size, int number)
{
    number = list[0];
    list[0]++;
    list[2] = list[0];
    list[0] = number;
    printArray(list, size);
}