#include<stdio.h>


int main(){
  
  // printf("Pinter");
  // * print memory address 
  // int a  = 48; 
  // printf("%p",&a);

  // store memory address value 
int x =10;
int *p = &x;
*p = 20;

printf("%p\n",p);
printf("%d",x);
return 0;
}