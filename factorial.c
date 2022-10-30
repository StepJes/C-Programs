#include<stdio.h>
int main()
{
    int num,fac=1,i;
    printf("Enter a number:");     //Taking input
    scanf("%d",&num);
    for(i=1;i<=num;i++)           //Calculating factorial of that number
    {
        fac=fac*i;
    }
    printf("Factorial:%d",fac);
    return 0;
}