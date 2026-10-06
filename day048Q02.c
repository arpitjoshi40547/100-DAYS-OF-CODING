// to check is one string is rotation of other
#include <stdio.h>
#include <string.h>
void is_rotation(char arr[], char arr2[])
{
    int l1 = strlen(arr);
    int l2 = strlen(arr2);
    int l3 = l1 + l2;
    if (l1 != l2)
    {
        printf("The Strings are not rotation of each other");
        return;
    }
    char arr3[l3];
    int i = 0;
    while (arr[i] != '\0')
    {
        arr3[i] = arr[i];
        i++;
    }
    int j = 0;
    while (arr[j] != '\0')
    {
        arr3[i] = arr[j];
        i++;
        j++;
    }
    arr3[i] = '\0';
    int found = 0;
    for (i = 0; arr3[i] != '\0'; i++)
    {
        for (j = 0; arr2[j] != '\0'; j++)
        {
            if (arr3[i + j] != arr2[j])
            {
                break;
            }
        }
        if (arr2[j] == '\0')
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("\"%s\" is a rotation of \"%s\".\n", arr2, arr);
    }
    else
    {
        printf("\"%s\" is NOT a rotation of \"%s\".\n", arr2, arr);
    }
}
int main()
{
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == '\n')
            str1[i] = '\0';
    }

    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] == '\n')
            str2[i] = '\0';
    }

    is_rotation(str1, str2);
    return 0;
}