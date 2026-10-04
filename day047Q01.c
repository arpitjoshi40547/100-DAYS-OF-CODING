// Anagram word
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void remove_newline(char str[])
{
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
}
bool anagram(char wd1[], char wd2[])
{
    if (strlen(wd1) != strlen(wd2))
        return false;
    int count[26] = {0};
    for (int i = 0; wd1[i] != '\0';i++)
    {
        char ch1 = tolower(wd1[i]);
        char ch2 = tolower(wd2[i]);
        if (isalpha(ch1))
            count[ch1 - 97]++;
        if (isalpha(ch2))
            count[ch2 - 97]--;
    }
    for (int j = 0; j < 25; j++)
    {
        if (count[j] != 0)
            return false;
    }
    return true;
}
int main()
{
    char ar1[100];
    char ar2[100];
    printf("Enter first word: ");
    if (fgets(ar1, sizeof(ar1), stdin) == NULL)
        return 1;
    printf("Enter second word: ");
    if (fgets(ar2, sizeof(ar2), stdin) == NULL)
        return 1;
    remove_newline(ar1);
    remove_newline(ar2);
    if(anagram(ar1, ar2))
    printf("The entered words are anagram");
    else 
    printf("The entered word are not anagram");
    return 0;
}