//Find the digit that occurs the most times in an integer number.


#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n ");
    scanf("%d",&n);
    int temp=n;
    int flag=0;
    while(temp!=0)
    {
        temp=temp/10;
        flag++;
    }
    int num[flag];
    int i=0;
    while(n>0)
    {
        num[i]=n%10;
        n=n/10;
        i++;
    }
    int count[10]={0};
    for(int i=0;i<flag;i++)
    {
        count[num[i]]++;
    }
    int max=count[0];
    int rep=0;
    for(int i=1;i<10;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            rep=i;
        }
    }
    printf("The most repeated digit is %d and it came %d times", rep, max);
    return 0;
}
