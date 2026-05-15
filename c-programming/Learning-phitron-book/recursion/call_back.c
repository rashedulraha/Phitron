#include<stdio.h>


void function1(){
  function2();
  printf("i am a function 1\n");
}
void function2(){
  printf("im a function 2\n");
}

int main(){
  function1();
  printf("im a main function\n");
  return 0;
}