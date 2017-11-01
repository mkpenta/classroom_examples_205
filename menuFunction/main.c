/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/

#include <stdio.h>

void printMenu();
int getSelection();
int printMenuAndGetSelection();

int main() 
{
   
    int choice = printMenuAndGetSelection();
    printf("%d\n", choice);

}


int printMenuAndGetSelection()
{
    printMenu();
    return getSelection();
}
void printMenu()
{
    puts("Enter 1, enter 2, or enter 3");
}

int getSelection()
{
    int ans;
    puts("Make a selction");
    scanf("%d", &ans);
    return ans;
}