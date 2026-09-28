//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main()
{
    int n;
    int m;
    printf("Enter the row and columns of a array\n");
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
    int trans[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            trans[i][j]=arr[j][i];
        }
    }
    printf("The transpose of the given matrix is:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%-8d",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}


