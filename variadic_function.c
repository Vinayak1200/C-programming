#include <stdio.h>
#include <stdarg.h>

//Variadic function (can take any number of arguments)
int  sum (int count,...)  
{

     int sum=0;
     va_list ptr;
     va_start(ptr, count);
     
     for (int i=0;i<count;i++)
     {
         sum+=va_arg(ptr, int);
     }
     
     return sum;
}

int main(void)
{
    printf("The sum of first five natural numbers is %d\n", sum(5, 1, 2, 3, 4, 5));
    return 0;
}