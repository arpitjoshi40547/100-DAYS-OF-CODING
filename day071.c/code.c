//Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and 
//age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was 
//successfully saved.
#include <stdio.h>
#include <ctype.h>
int main()
{
    //To make  a new file
    FILE *info = fopen("info.txt","w");
    if (info == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    char name[100];
    printf("Enter Your name:");
    fgets(name,sizeof(name),stdin);
    int age;
    printf("Enter Your age:");
    scanf("%d",&age);
    fprintf(info,"Name:%s",name);
    fprintf(info,"Age:%d",age);
    fclose(info);
    return 0;
}