/*
Michael Penta
*/

#include <stdio.h>

enum menu_options { RUN=1, PRINT, HELP, QUIT};

int printMenu();

int main() {

  enum menu_options choice;
   choice = printMenu();
  
    switch(choice)
    {
        case RUN:
            puts("Run");
            break;
        case PRINT:
            puts("Print");
            break;
        case HELP:
            puts("help");
            break;
        
        case QUIT:
            puts("quit");
            break;
    
        default:
            puts("unknown");
            break;
    }
    
  
  
}

int printMenu()
{
    int n;
    puts("Enter\n1. to Run\n2. for print 3. for help\n4. to quit");
    scanf("%d",&n);
    return n;
}