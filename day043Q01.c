//Reverse a String
#include <stdio.h>
void reverse(char arr[])
{
    int length=0;
    int i=0;
    while(arr[i]!='\0')
    {
    length++;
    i++;
    }
    int start=0;
    int end=length-1;
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("The reversed String is:%s",arr);
}
int main()
{
    char Phrase[100];
    printf("Enter a Phrase to get the reversed Phrase\n");
    fgets(Phrase,sizeof(Phrase),stdin);
    reverse(Phrase);
    return 0;
}

