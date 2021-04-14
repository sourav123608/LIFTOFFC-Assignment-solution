#include<stdio.h>
int main()
{
    int a=0,b=4;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j==a||j==b) printf("*");
            else printf(" ");
        }
        a++; b--; 
        printf("\n");
    }
    return 0;
}