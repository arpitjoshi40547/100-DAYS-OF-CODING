#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* longestSubstringWithoutRepeating(char *s, char *result) {
    int last_seen[256];
    for (int i = 0; i < 256; i++) 
    {
        last_seen[i] = -1;
    }
    
    int max_len = 0;
    int start_index = 0; 
    int left = 0;
    for (int right = 0; s[right] != '\0'; right++) 
    {
        unsigned char current_char = (unsigned char)s[right];

        if (last_seen[current_char] >= left) 
        {
            left = last_seen[current_char] + 1;
        }
        last_seen[current_char] = right;
        int current_len = right - left + 1;
        if (current_len > max_len) 
        {
            max_len = current_len;
            start_index = left; 
        }
    }
    strncpy(result, s + start_index, max_len);
    result[max_len] = '\0';
    return result;
}

int main() {
    char s[1000];
    char result[1000];
    printf("Enter string s: ");
    if (fgets(s, sizeof(s), stdin) != NULL) 
    {

        size_t len = strlen(s);
        if (len > 0 && s[len - 1] == '\n') 
        {
            s[len - 1] = '\0';
        }

        longestSubstringWithoutRepeating(s, result);
        printf("Longest Substring: \"%s\"\n", result);
        printf("Length: %lu\n", strlen(result));
    }
    return 0;
}