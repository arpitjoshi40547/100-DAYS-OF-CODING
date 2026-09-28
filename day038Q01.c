//Add two matrices

#include <stdio.h>
int main()
{
    int n;
    int m;
    printf("Enter the row and columns of a array1\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("Enter The elements of the array\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int n1;
    int m1;
    printf("Enter the row and columns of a array2\n");
    scanf("%d %d",&n1,&m1);
    int arr1[n1][m1];
    printf("Enter The elements of the array\n");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    if(n!=n1&&m!=m1)
    {
    printf("The matrix cannot be added");
    return 0;
    }
    int sum[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum[i][j]=arr[i][j]+arr[i][j];
        }
    }
    printf("The sum of the two matrix is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%-8d",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

