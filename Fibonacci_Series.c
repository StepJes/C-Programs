#include <stdio.h>
int main() {

  int i, n;

  
  int a = 0, b = 1;

  
  int c  = a+b;
  printf("\n");
  printf("\n");
  printf("********************************************************************\n");
  printf("* Please Enter The Number Of Terms Of The Series You Want To Print *\n");
  printf("********************************************************************\n");
  printf("\n");
  printf("\n");
  scanf("%d", &n);
  printf("The Desired Series Is:\n %d   %d   ", a, b);
  for (i = 3; i <= n; i++) {
    printf("%d   ", c);
    a = b;
    b = c;
    c = a+b;
  }
  printf("\n");
  printf("\n");

  return 0;
}