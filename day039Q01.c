// To check whether the number of diagonal are distint or not 

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
    printf("The Diagonal is not possible");
    return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    bool distinct=true;
    for(int i=0;i<=n-2;i++)
    {
        int j=i+1;
        if(arr[i][i]!=arr[j][j])
        distinct=false;

    }
    if(distinct)
    printf("All the elements of the diagonal of the matrix are same");
    else
    printf("All the elements of the diagonal of the matrix are not same");
    return 0;
}


