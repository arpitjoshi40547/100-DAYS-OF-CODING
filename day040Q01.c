//Perform diagonal traversal of a matrix.

#include <stdio.h>
int main()
{
    int n;
    int m;
    printf("Enter the row and columns of a array1\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("Enter The elements of the array\n");
    if(n!=m)
    {
    printf("Reversal along the diagonal is not psooible");
    return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int arr2[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr2[j][i]=arr[i][j];     
        }
    }
    printf("The array after diagonal reversal is:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%-8d",arr2[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}


