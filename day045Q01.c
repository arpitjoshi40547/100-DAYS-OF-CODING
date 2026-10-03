//To find the frequency of the given number;
#include <stdio.h>
void freq(char arr[],char wd)
{
    int i=0;
    int freq=0;
    while(arr[i]!='\0')
    {
        char ch=arr[i];
        if(ch==wd)
        freq++;
        i++;
    }
    printf("The frequency of '%c' in '%.20s......' is:%d",wd,arr,freq);
}
int main()
{
    char Phrase[500];
    printf("Enter a Phrase:");
    fgets(Phrase,sizeof(Phrase),stdin);
    char ch;
    printf("Enter the word You want to count\n");
    scanf("%c",&ch);
    freq(Phrase,ch);
    return 0;
}