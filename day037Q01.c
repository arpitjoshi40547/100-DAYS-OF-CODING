//Find the sum of each row of a matrix and store it in an array.

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
    int sumofrow[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=arr[i][j];
        }
        sumofrow[i]=sum;
    }
    for(int i=0;i<n;i++)
    {
        printf("Sum of Row %d\n",i+1);
        printf("%d\n",sumofrow[i]);
    }
    return 0;
}


