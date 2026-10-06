//Print the initials of a name.
#include <stdio.h>
void initials(char arr[])
{
    char spaces[100];
    int i=0;
    int p=1;
    spaces[0]=arr[0];
    char ch;
    while(arr[i]!='\0')
    {
        if(arr[i]==' ')
        {
        ch=arr[i+1];
        if (ch >= 'a'&&ch <= 'z')
            ch=ch-32;
        spaces[p]=(char)ch;
        p++;
        }
        i++;
    }
    spaces[p]='\0';
    int k=0;
    while(spaces[k]!='\0')
    {
    printf("%c.",spaces[k]);
    k++;
    }
}
int main()
{
    char names[500];
    printf("Enter name: ");
    fgets(names,sizeof(names),stdin);
    initials(names);
    return 0;
}