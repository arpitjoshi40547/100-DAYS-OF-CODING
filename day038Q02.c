// To check whether the matrix is symmeteric

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
    printf("The matrix is not symmertic");
    return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    bool issymmetric=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]!=arr[j][i])
            issymmetric=false;
        }
    }
    if(issymmetric)
    printf("The given matrix is symmetric");
    else
    printf("The given matrix is not symmetric");
    return 0;
}


