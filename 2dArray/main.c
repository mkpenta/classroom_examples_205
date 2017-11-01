
#include <stdio.h>

#define COLS 4
#define ROWS 3

void printArray(int[ROWS][COLS]);

int main() {


    int board[ROWS][COLS] = {{1 , 2, 3, 4}, 
                              {5, 6, 7, 8}, 
                              {9, 10, 11, 12}};
    
    printArray(board);
    
    sumArray(board[0]);

}

void sumCol(int ar[ROWS][COLS], int col)
{
    for(int i = 0; i < ROWS; i++)
    {
        ar[i][col]
    }
}

void sumArray(int ar[])
{
    
}


void printArray(int ar[][COLS] )
{
    for(int row = 0; row < ROWS; row++)
    {
        for(int col = 0; col < COLS; col++)
        {
            printf("%d ", ar[row][col]);
        }
        puts(" ");
    }
}