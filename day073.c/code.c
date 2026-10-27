//To find the no of characters and words lines
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *info = fopen("info.txt","r");
      if (info == NULL) 
    {
        printf("Error: Could not open input.txt for reading.\n");
        return 1;
    }
    int word=0;
    char str[1000];
    int letters=0;
    int lines=0;
    while(fgets(str,sizeof(str),info)!= EOF)
    {
        lines++;
        for (int i = 0; str[i] != '\0'; i++) 
        {
        letters++;
        if(isspace(str[i]))
        word++;
        }
    }
    printf("The number of letters are %d\n",letters);
    printf("The number of words are %d\n",word);
    printf("The number of lines are %d\n",lines);
    return 0;
}