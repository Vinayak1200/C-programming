#include <stdio.h>
void hailstone(int n);
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    printf("The hailstone numbers are as follows : \n");
    hailstone(n);
    return 0;
}
void hailstone(int n)
{
    if (n==1)
    {
        printf("%d\n", n);
    }
    else if (n%2==0)
    {
        printf("%d\n", n);
        hailstone(n/2);
    }
    else if (n%2!=0)
    {
        printf("%d\n", n);
        hailstone(3*n+1);
    }
}