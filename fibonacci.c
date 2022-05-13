#include <stdio.h>
int main()
{
    int a=0, b=1, temp, N;
    printf("Enter the number of terms of the Fibonacci series : ");
    scanf("%d", &N);
    printf("Term 1 is %d\n", a);
    printf("Term 2 is %d\n", b);
    for (int i=3;i<=N;i++)
    {
        temp = b;
        b += a;
        a = temp;
        printf("Term %d is %d\n", i, b);
    }
    return 0;
}

    