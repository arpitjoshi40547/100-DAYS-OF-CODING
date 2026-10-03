//Toggle case of each character in a string.
#include <stdio.h>
void toggle(char arr[])
{
    int i=0;
    char ch;
    while(arr[i]!='\0')
    {
        ch=arr[i];
        if(arr[i]>=65&&arr[i]<=91)
        {
            ch=ch+32;
            arr[i]=ch;
        }
        else if(arr[i]>=97&&arr[i]<=122)
        {
            ch=ch-32;
            arr[i]=ch;
        }
        i++;
    }
    printf("The new sentence is:%s",arr);
}
int main()
{
    char Ph[500];
    printf("Enter a Phrase:");
    fgets(Ph,sizeof(Ph),stdin);
    toggle(Ph);
    return 0;
}