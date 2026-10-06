//Find the longest word in a sentence
#include <stdio.h>
int longest_words(char arr[])
{
    int current_length=0;
    int max_length=0;
    int i=0;
    int currentindex=0;
    int maxindex=0;
    while (arr[i] != '\0') 
    {
        while(arr[i]==' ' ||arr[i] =='.' ||arr[i] =='?'||arr[i]=='\n')
            i++;
        if (arr[i]=='\0')
            break;
        currentindex = i;
        current_length = 0;
    while(arr[i]!=' '&&arr[i]!='.'&&arr[i]!='?'&&arr[i]!='\0')
    {
        current_length++;
        i++;
    }
    if(current_length>max_length)
    {
        max_length=current_length;
        maxindex=currentindex;
    }
}
    printf("Longest word: ");
    for (int j = maxindex; j < maxindex + max_length; j++) 
    {
        printf("%c", arr[j]);
    }
    printf("\nLength: %d\n", max_length);
}
int main()
{
    char arr[500];
    printf("Enter a Sentence:");
    fgets(arr,sizeof(arr),stdin);
    longest_words(arr);
    return 0;
}