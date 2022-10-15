#include<stdio.h>
int main(){
  int a,i,f=0;

  printf("\nPlease Type The Number You Want To Verify: \n");
  scanf("%d",&a);
  for(i=2;i<a;i++){
      if(a%i==0){
        f=1;
        }
    }
   if(f==1){printf("Not A Prime Number\n");}
  if(f==0){printf("Yes A Prime\n");}
}