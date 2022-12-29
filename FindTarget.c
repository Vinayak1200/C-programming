#include <stdio.h>
#include <stdlib.h>

int* FindTarget(int* arr, int n, int target)
{
    int* target_list = (int *)malloc(2*sizeof(int));
    int index1;
    int index2;
    int flag=0;
    int f=0;
    for (int i=0;i<n;i++)
    {
        if (f==0)
        {
        if (arr[i]==target)
        {
            f=1;
            index1 = i;
        }
        }
        
        if (arr[i+1]!=target && arr[i]==target && i>index1)
        {
            flag=1;
            index2 = i;
        }
    }
    target_list[0]=index1;
    if (flag==0)
    {
        index2 = index1;
    }
    target_list[1]=index2;

    return target_list;
}

void PrintArray(int* arr, int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int A[6]={1, 2, 3, 4, 4, 5};
    int *B = FindTarget(A, 6, 4);

    PrintArray(B, 2);

    return 0;
}