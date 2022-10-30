#include<stdio.h>
int main()
{
    int num,orig,rem,rev=0;
    printf("Enter a number:");  //Taking input
    scanf("%d",&num);
    orig=num;         //Storing the original number in another variable

    while(num!=0)     //Creating the reversed number
    {
        rem=num%10;
        rev=rev*10 + rem;
        num = num/10;
    }

    if(rev==orig)     //Checking if the reversed number is same as original
    {
        printf("Yes palindrome");
    }
    else
    {
        printf("No not palindrome");
    }
    return 0;
}