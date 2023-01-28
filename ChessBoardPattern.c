#include <stdio.h>
#define BLACK "\u26AB"
#define WHITE "\u26AA"

int main(void)
{
    for (int i=0;i<8;i++)
    {
        for (int j=0;j<8;j++)
        {
            if ((i+j)%2==0)
            {
                printf(BLACK);
            }
            else printf(WHITE);
        }
        printf("\n");
    }
    return 0;
}