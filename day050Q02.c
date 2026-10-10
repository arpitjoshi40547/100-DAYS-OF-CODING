//print all substrings of a string
#include <stdio.h>
#include <string.h>
void substring(char arr[])
{
    arr[strcspn(arr, "\n")] = 0;
    int n=strlen(arr);
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            printf("%.*s ",(j-i+1),&arr[i]);
        }

    }
}
int main()
{
    char arr[500];
    printf("Enter a string to get all the substring:");
    fgets(arr,sizeof(arr),stdin);
    substring(arr);
    return 0;
}