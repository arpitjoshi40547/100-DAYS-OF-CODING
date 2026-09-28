//Read and print a 2D  matrix.


#include <stdio.h>
int main()
{
    int n;
    int m;
    printf("Enter the row and columns of a array\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("Enter The elements of the array in the order\nA B C D E * * * * *\n* * * * * * * * * *\n* * * * * * * * * *\n* * * * * * * * * *\n* * * * * * * * * *\n* * * * * * * * * *\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The entered array is:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%-8d",arr[i][j]);
            printf(" ");
        }
        printf("\n");
    }
return 0;
}
