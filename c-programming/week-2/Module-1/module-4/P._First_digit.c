#include<stdio.h>


int main(){


   int allDigit ;

  scanf("%d", &allDigit);
  
  int firstDigit  = allDigit/1000;

   if(firstDigit%2==0){
     printf("%d", "EVEN");
   }else{
      printf("%d", "ODD");
   }
// hello

// 

  return 0;
}