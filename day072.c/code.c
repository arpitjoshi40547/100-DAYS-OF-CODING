//To read a file and print the contents in the terminal 
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE *info = fopen("info.txt","r");
    if(info == NULL)
    {
        printf("The file is empty or could not be opned\n");
        return 1;
    }
    char str[1000];
    printf("The File contents:\n");
    while(fgets(str,sizeof(str),info) != NULL)
    {
        printf("%s",str);
        
    }
    fclose(info);
    return 0;
}
    