#include <stdio.h>

int main()
{
    int a ,b,c;
    printf("Enter the values of a and b repectiviley\n");
    scanf("%d %d",&a ,&b);
    c=b;
    b=a;
    a=c;
    printf("After swaping the values are %d and %d \n",a ,b);
    return 0;
}


