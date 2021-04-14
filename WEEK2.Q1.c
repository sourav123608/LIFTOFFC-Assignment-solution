#include<stdio.h>
#include<string.h>
int main()
{
    int num,a;
    char c='y';
    while(c=='y')
    {
        int sum=0;
    printf("Enter a number whose digits you want to add: ");
    scanf("%d",&num);
        while(num!=0)
    {
        a=num%10;
        num=num/10;
        sum=sum+a;
    }
    printf("Sum of digits is : %d\n",sum);
    printf("Want to continue?(y/n) : "); 
    scanf(" %c",&c);
    }
    return 0;
    
}