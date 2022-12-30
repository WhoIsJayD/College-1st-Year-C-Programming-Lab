#include<stdio.h>
int main()
{
    int num1,num2=0,num3,num4;
    printf("Number to check: ");
    scanf("%d",&num1);
    num3=num1;
    while(num1>0)
    {
        num4=num1%10;
        num2+=(num4*num4*num4);
        num1=num1/10;
    }
    if(num3==num2)
    {
        printf("Number is Armstrong number...!\n");
    }
    else
    {
        printf("Number is not a Armstrong number...!\n ");
    }
    return 0;
}


