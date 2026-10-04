//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
void repeating(char arr[])
{
    int i=0;
    char ch;
    int index;
    int seen[26]={0};
    while(arr[i]!='\0')
    {
        ch=arr[i];
        if(ch>=97&&ch<=122)
        {
            index=ch-97;
            if(seen[index]==1)
            {
            printf("The first lower case alphabet to repeat is %c",ch);
            return;
            }
            seen[index]=1;
        }
        i++;                                                      
    }
}
int main()
{
    char Ph[500];
    printf("Enter a Phrase:");
    fgets(Ph,sizeof(Ph),stdin);
    repeating(Ph);
    return 0;
}