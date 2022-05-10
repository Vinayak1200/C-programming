#include <stdio.h>
void binary(int n)
{
         if (n/2==0)
         {
            printf("%d", 1);
            return;
         }                         //void function to print the binary form of a number
         int temp=n/2;             //This function does not make use of the modulo operator
         int x = n-(2*temp);
         binary(n/2);
         printf("%d", x);
}
int main(void)
{
    int num;
    printf("Enter the number you want to convert to binary : ");
    scanf("%d", &num);
    binary(num);
    printf("\n");
    return 0;
}