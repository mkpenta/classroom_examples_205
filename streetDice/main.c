/*
Michael Penta
Project/Assignemnt/Lab example
This pogram prompts a user and prints a result
*/

#include <stdio.h> //printf scanf
#include <stdlib.h> //rand srand
#include <time.h> //for rand seed

float betPrompt();
float fillPot(float);
int roll();
void win();
void lose();
float payout(float pot);
int getTotal();
char playAgain();

int main() 
{
    srand(time(NULL));
   int point = 0;
   float bet = 0;
   float pot = 0;
   char choice = 'y';
   int totalRoll;
   
   while(choice == 'y')
    {   
       //loop starts
        bet = betPrompt();
        pot = fillPot(bet);
        
        totalRoll = getTotal();
       
        if(totalRoll == 7 || totalRoll == 11)
        {
            win();
        }
        else
        {
            puts("Rolling for point");
            point = totalRoll;
            printf("point is %d\n", point);
            
            do
            {
                 puts("Rolling again");
              totalRoll = getTotal();
                
            }while(totalRoll != 7 && totalRoll != point);
             // while(! (totalRoll == 7 || totalRoll == point))
            
            //7 or point has been rolled or we wouldnt be here
            if(totalRoll == point)
            {
                win();
                pot = payout(pot);
            }
            else
            {
                lose();
                pot = 0;
            }
        }
        //PLAYAGIN   
        choice = playAgain();
    }//loop ends
    printf("Game Over --> bet = %f, pot = %f, roll = %d\n", bet, pot, totalRoll);
    
}
float betPrompt()
{
    float bet=0;
    puts("Enter an amount to bet");
    scanf("%f", &bet);
    return bet;
}
float fillPot(float bet)
{
    return bet * 2;
}
int roll()
{
    
    int r = rand() % 6 + 1;
    //printf("Roll = %d\n", r);
    return r;
}

void win()
{
    puts("Thrower Wins!!!!!!!");
}
void lose()
{
    puts("Thrower is a huge loser!");
}

float payout(float pot)
{
   printf("You won $%.2f\n", pot);
   return 0;
}

char playAgain()
{
    char c = 'n';
    puts("new game y or n");
    scanf(" %c", &c);
    return c;
}

int getTotal()
{
    int r1 = roll();
    int r2 = roll();
    int totalRoll = r1+r2;
    printf(" you rolled %d and %d for a total of %d\n", r1, r2, totalRoll);
    return totalRoll;
}