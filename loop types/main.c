/*
Michael Penta
*/

#include <stdio.h>
#define LIMIT 10

int main() {
 /*
    //universal - while loop
    // 1. intialized variable 2. test that variable 3.update the variable
    
    // this is a counting loop
    //1.
    int count = 0;
    while(count < LIMIT) //2. test
    {
       if(count % 2 == 0)
       {
           printf("%d\n", count);
       }
        
        //3.
        count = count + 1; //count +=1 // count++//++count
    }
    
//same as above
  count = 0;
    while(count < LIMIT) //2. test
    {
        printf("%d\n", count);
        //3.
        count = count + 2; //count +=1 // count++//++count
    }


///short hand counting loop
//    1            2        3
for(int i = 0 ; i < LIMIT; i++)
{
        if(i % 2 == 0)
       {
           printf("%d\n", i);
       }
        
}

//sential loop
//repeat until a sential value is encountered
// sential value - a special number

int num = 0;
int total = 0;
puts("Enter a positive number (or negative to quit");
scanf("%d", &num);

while(num >= 0)
{
    total += num;
    
    puts("Enter a positive number (or negative to quit");
    scanf("%d", &num);
}


/// flag

int isFirst_flag = 1;

   count = 0;
    while(count < LIMIT) //2. test
    {
        if(isFirst_flag == 1)
        {
            puts("first loop");
            isFirst_flag = 0;
        }
        
       if(count % 2 == 0)
       {
           printf("%d\n", count);
       }
        
        //3.
        count = count + 1; //count +=1 // count++//++count
    }



//// Do while User validation

    char userIn= '-';
    
    do
    {
        puts("Enter a y or n");
        scanf(" %c", &userIn);
        
    }while(userIn != 'y' && userIn != 'n');
    
    printf("You Chose %c\n",userIn );

///user terminated loop

    int menuChoice=0;
    do
    {  
        puts("enter 1 to do foo \n enter 2 to do bar \n enter 3 to quit");
        scanf(" %d", &menuChoice);
        
        puts("Perform specified task");
        
        puts("Do you want to quit?");
    }while(menuChoice != 3);



//validate and terminate
// this can be hugely improved with a switch
//(nested loops)
   

 menuChoice=0;
    
    do
    {   do
        {
            puts("enter 1 to do foo \n enter 2 to do bar \n enter 3 to quit");
            scanf(" %d", &menuChoice);
        
        }while(menuChoice > 0 && menuChoice < 4);
    
        
      switch(n)
        {
        case 1: 
            puts("zero option");
            break;
        case 2: 
            puts("1 option");
            break;
        case 3:
            puts("2 option");
            break;
        default:
            puts("not a choice");
            break;   
    }
        
    }while(menuChoice != 3);
*/


for(int r = 0; r < 5; r++)
{
     for(int c = 0 ; c < 10; c++)
    {
        printf("%c", '*');  
    }
    printf("%c",'\n');  
}



   




}




















