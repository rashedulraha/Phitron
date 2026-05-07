#include<stdio.h>


int main(){
  
  //? first step
  // int sum  = 0;
  // int i; 
  // for (i=0;i<=10;i++){
  //   sum  = sum +i;
  // };
  // printf("%d",sum);
  //? second step 

   int sum = 0;
   int i ;
   int n ; 
   scanf("%d" , &n);
   for (i=0;i<=n;i++){
    sum = sum +i ;
   };
   printf("%d",sum);
  return 0;
}