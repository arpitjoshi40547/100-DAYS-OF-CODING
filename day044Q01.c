//Count spaces, digits, and special characters in a string.

#include <stdio.h>
#include <ctype.h>
void count(char arr[])
{
    int i=0;
    int dig=0;
    int spaces=0;
    int sp_ch=0;
    while(arr[i]!='\0')
    {
        if(arr[i]=='\n')
        {
        i++;
        continue;
        }
        else if(isspace(arr[i]))
        spaces++;
        else if(isdigit(arr[i]))
        dig++;
        else if(!isalpha(arr[i]))
        sp_ch++;
        i++;
    }
    printf("The total Digits are:%d\n",dig);
    printf("The total Spaces are:%d\n",spaces);
    printf("The total Special character are:%d\n",sp_ch);
}

int main()
{
    char Phrase[100];
    printf("Enter a Phrase\n");
    fgets(Phrase,sizeof(Phrase),stdin);
    count(Phrase);
    return 0;
}
