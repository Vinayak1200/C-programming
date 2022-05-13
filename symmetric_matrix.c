#include <stdio.h>
int main()
{
    int m, n, cnt=0;
    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);
    int A[m][n];
    printf("Matrix A : \n");
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            printf("A[%d][%d] = ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (A[i][j]!=A[j][i])
            {
            printf("A is a not a symmetric matrix\n");
            cnt=1;
            return 1;
            } 
        }
    }
    if (cnt==0)
    {
        printf("A is a symmetrc matrix\n");
    }
    return 0;
}