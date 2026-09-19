// Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number till where u need to print  all  prime numbers \n");
    scanf("%d", &n);
    for (int b = 2; b <= n; b++)
    {
        int flag = 0;
        for (int i = 1; i <= b; i++)
        {
            if (b % i == 0)
            {
                flag++;
            }
        }
        if (flag == 2)
            printf("%d,", b);
    }
    return 0;
}
