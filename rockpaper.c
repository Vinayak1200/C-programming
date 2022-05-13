#include <stdio.h>
#include <time.h>
#include <stdlib.h>
enum choice {rock, paper, scissors};
typedef enum choice choice;
int main(int argc, char const *argv[])
{
    choice c1, c2;
    printf("ROCK PAPER SCISSORS\n");
    printf("YOU WILL PLAY AGAINST THE COMPUTER\n");
    printf("Press 0 for rock\nPress 1 for paper\nPress 2 for scissor\n");
    printf("Enter your choice : ");
    scanf("%d", &c1);
    if (c1>2 || c1<0)
    {
        printf("Wrong input\ntry again\n");                                
        return 1;
    }
    srand(time(NULL));
    c2 = rand()%3;                                                       
    if (c2==rock)
    printf("The computer has chosen rock\n");
    else if (c2==paper)
    printf("The computer has chosen paper\n");
    else if (c2==scissors)
    printf("The computer has chosen scissor\n");
    if (c1==c2)
    {
        printf("draw\n");
    }
    else if (c1==rock && c2==paper)
    {
        printf("better luck next time\n");
    }
    else if (c1==paper && c2==rock)
    {
        printf("congratulations!you win!!\n");
    }
    else if (c1==scissors && c2==rock)
    {
        printf("better luck next time\n");
    }
    else if (c1==rock && c2==scissors)
    {
        printf("congratulations!you win!!\n");
    }
    else if (c1==paper && c2==scissors)
    {
        printf("better luck next time\n");
    }
    else if (c1==scissors && c2==paper)
    {
        printf("congratulations!you win!!\n");
    }
    return 0;
}
