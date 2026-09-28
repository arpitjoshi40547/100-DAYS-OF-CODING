//Multiplication of two array

#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the rows and columns of Matrix 1 (n m): ");
    scanf("%d %d", &n, &m);

    int arr1[n][m];
    printf("Enter the elements of Matrix 1:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    int n1, m1;
    printf("Enter the rows and columns of Matrix 2 (n1 m1): ");
    scanf("%d %d", &n1, &m1);

    // Multiplication condition: Columns of Matrix 1 MUST equal Rows of Matrix 2
    if (m != n1)
    {
        printf("Matrix multiplication is not possible. (Columns of Matrix 1 must equal Rows of Matrix 2)\n");
        return 0;
    }

    int arr2[n1][m1];
    printf("Enter the elements of Matrix 2:\n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    // Resultant matrix dimension will be (n x m1)
    int pro[n][m1];

    // Matrix Multiplication Algorithm
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            pro[i][j] = 0; // Initialize cell product sum
            for (int k = 0; k < m; k++) // k loops over shared dimension (m or n1)
            {
                pro[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Display the result
    printf("\nProduct Matrix (%dx%d):\n", n, m1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            printf("%d\t", pro[i][j]);
        }
        printf("\n");
    }

    return 0;
}