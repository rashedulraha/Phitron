#include<stdio.h>


// *pass by value function
// void hello(int i){
//   printf("%d\n",i);
//   i=50;
//   printf("%d",i);
// }

// * pass by references function
void hello(int * i){
  // printf("%d",i);
  *i = 48; 
}

int main(){
  
  int a = 38;
  // pass by value 
  // hello(a);
  // pass by references
  printf("%d\n",a);
  hello(&a);
  printf("%d",a);
  return 0;
}