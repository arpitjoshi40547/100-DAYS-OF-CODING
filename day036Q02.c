//Find the sum of all elements in a matrix.

#include <stdio.h>
int main()
{
    int n;
    int m;
    printf("Enter the row and columns of a array\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("Enter The elements of the array in the order\nA B C D E * \n* * * * * *  \n* * * * * *  \n* * * * * * \n* * * * * *  \n* * * * * * \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum =0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("The sum of all elements of a array is:%d",sum);
    return 0;
}
