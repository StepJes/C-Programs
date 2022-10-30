#include <stdio.h>
void main()
{
   int num, originalNum, remainder, result = 0;
   printf("Enter a three-digit integer: ");
   scanf("%d", &num);
   originalNum = num;

   while (num != 0)
   {
      remainder = num % 10;
      result += remainder * remainder * remainder;
      num /= 10;
   }

   if (originalNum == result)
      printf("%d is an Armstrong number.", originalNum);
   else
      printf("%d is not an Armstrong number.", originalNum);
}
