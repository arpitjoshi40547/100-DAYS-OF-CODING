//Check if a string is a palindrome.


#include <stdio.h>
void palindrome(char arr[])
{
    int length=0;
    int i=0;
    while(arr[i]!='\0')
    {
        length++;
        i++;
    }
    if (length>0&&arr[length-1]=='\n') 
    {
        arr[length-1]='\0';
        length--;
    }
    int start=0;
    int end=length-1;
    int ispalindrome=1;
    while(start<end)
    {
        if(arr[start]!=arr[end])
        {
        ispalindrome=0;
        break;
        }
        start++;
        end--;
    }
    if(palindrome)
    printf("The Entered String is  palindrome");
    else
    printf("The Entered String is not palindrome");
}
int main()
{
    char Ph[100];
    printf("Enter a Phrase\n");
    fgets(Ph,sizeof(Ph),stdin);
    palindrome(Ph);
    return 0;
}