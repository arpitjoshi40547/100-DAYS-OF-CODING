//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>
void initials(char arr[])
{
    int length=strlen(arr);
    if (length > 0 && arr[length-1]=='\n') {
        arr[length-1]='\0';
        length--;
    }
    int lastspace=-1;
    int i=0;
    while(arr[i]!='\0')
    {
        if(arr[i]==' ')
        lastspace=i;
        i++;
    }
    if(lastspace==-1)
    {
    printf("Aleast enter a First name and a surname");
    return;
    }
    printf("%c.",arr[0]);
    for(int i=0;i<lastspace;i++)
    {
        if(arr[i]==' ')
        {
            printf("%c.",arr[i+1]);
        }
    }
    for(int i=lastspace;i<length;i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}
int main()
{
    char Name[500];
    printf("Enter a name:");
    fgets(Name,sizeof(Name),stdin);
    initials(Name);
    return 0;
}
