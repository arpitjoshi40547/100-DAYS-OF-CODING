#include <stdio.h>
#include <string.h>
bool areAnagrams(char *s, char *t) 
{
    if (strlen(s) != strlen(t)) 
    {
        return false;
    }
    int freq[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) 
    {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) 
    {
        if (freq[i] != 0) 
        {
            return false;
        }
    }
    return true;
}
int main() {
char s[100], t[100];
    printf("Enter string s: ");
    scanf("%s", s);
    printf("Enter string t: ");
    scanf("%s", t);;
    if (areAnagrams(s, t)) 
    {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
    return 0;
}