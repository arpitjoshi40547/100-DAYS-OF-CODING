//Find the majority element in a array 
//Majority elemnt is which comes more than n/2 number of times mot necessarly with the higest frequecny
#include <stdio.h>
int check(int arr[],int len)
{
    int freq=0;
    int i=0;
    int maj=len/2;
    while(i<len)
    {
        if(arr[i]==arr[len-i])
        freq+=2;
        i++;
    }
    if(freq>maj)
    return 1;
    else 
    return 0;
}
int check2(int arr[],int len)
{
    int freq=0;
    int i=0;
    int maj=len/2;
    while(i<len)
    {
        if(arr[i]+arr[i+1])
        freq+=2;
        i++;
    }
        if(freq>len)
        return 1;
        else 
        return 0;
}
int main()
{
    int n;
    printf("The number of elemnets you want in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int p=check(arr,n);
    int p1=check2(arr,n);
    if(p1||p)
    printf("The array is a majority array");
    else
    printf("No a majority array");
    return 0;
}