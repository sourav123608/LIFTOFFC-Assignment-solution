#include<stdio.h>
int main()
{
    int arr[10];
    printf("Enter elements in the array : "); 
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0;
    int max=arr[j];
    while(j<9)
    {
        if(max<arr[j+1])
        max=arr[j+1];
        j++;

    }
    int k=0;
    int min=arr[k];
    while(k<9)
    {
        if(min>arr[k+1])
        min=arr[k+1];
        k++;
    }
    printf("\n\nMax element is %d\nMin element is %d",max,min);
    return 0;
}