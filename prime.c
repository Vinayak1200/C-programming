#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number : ");
    scanf("%d", &n);
    if (n==1 || n==0)
    {
        printf("The entered number is neither prime nor composite\n");
    }
    for (i=1;i<n;i++)
    {
        if (i==1)
        continue;
        else if (n%i==0)
        {
            printf("The entered number is composite\n");
            break;
        }
        else
        {
           printf("The entered number is prime\n");
           break;
        }
    }
    return 0;
}
