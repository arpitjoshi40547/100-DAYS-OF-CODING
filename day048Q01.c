// Reverse each word in a string without changing the order
#include <stdio.h>
#include <string.h>
void reverse_word(char str[], int start, int length)
{
    while (start < length)
    {
        char temp = str[start];
        str[start] = str[length];
        str[length] = temp;
        start++;
        length--;
    }
}
void reverse(char arr[])
{
    int i = 0;
    int start = 0;
    int len=strlen(arr);
    if (len>0&&arr[len-1]=='\n')
    {
        arr[len-1]='\0';
    }
    while (1)
    {
        if (arr[i] ==' '|| arr[i] == '\0')
        {
            reverse_word(arr, start, i - 1);
            if (arr[i]=='\0')
            {
                break;
            }
            start = 1 + i;
        }
        i++;
    }
}
int main()
{
    char ph[500];
    printf("Enter a sentence:");
    fgets(ph, sizeof(ph), stdin);
    reverse(ph);
    printf("%s\n", ph);
    return 0;
}
