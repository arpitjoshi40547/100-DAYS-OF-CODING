//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
void dateformate(char arr[])
{
    int i = 0;
    int dash = 0;
    int num = 0;
    while (arr[i] != '\0' && arr[i] != '\n')
    {
        if (arr[i] == '/')
            dash++;
        else if (arr[i] >= '0' && arr[i] <= '9')
            num++;
        else
            return;
        i++;
    }
    if (dash != 2 || num != 8 ||arr[2] != '/' || arr[5] != '/')
    {
        return;
    }
}
void datechange(char arr[])
{
    int mon_num = (arr[3] - '0') * 10 + (arr[4] - '0');
    char mon_str[4];
    switch (mon_num)
    {
        case 1:  strcpy(mon_str, "Jan"); break;
        case 2:  strcpy(mon_str, "Feb"); break;
        case 3:  strcpy(mon_str, "Mar"); break;
        case 4:  strcpy(mon_str, "Apr"); break;
        case 5:  strcpy(mon_str, "May"); break;
        case 6:  strcpy(mon_str, "Jun"); break;
        case 7:  strcpy(mon_str, "Jul"); break;
        case 8:  strcpy(mon_str, "Aug"); break;
        case 9:  strcpy(mon_str, "Sep"); break;
        case 10: strcpy(mon_str, "Oct"); break;
        case 11: strcpy(mon_str, "Nov"); break;
        case 12: strcpy(mon_str, "Dec"); break;
        default: strcpy(mon_str, "Inv"); break;
        return;
    }
    char newdate[12];
    newdate[0] = arr[0];
    newdate[1] = arr[1];
    newdate[2] = '-';
    newdate[3] = mon_str[0];
    newdate[4] = mon_str[1];
    newdate[5] = mon_str[2];
    newdate[6] = '-';
    newdate[7] = arr[6];
    newdate[8] = arr[7];
    newdate[9] = arr[8];
    newdate[10] = arr[9];
    newdate[11] = '\0';
    printf("The date in new format is: %s\n", newdate);
}
int main()
{
    char date[20];
    printf("Enter the date in the exact format (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);
    dateformate(date);
    datechange(date);
    return 0;
}