#include<stdio.h>


void addSum(int a,int b){
  printf("%d %d\n",a,b);
  int ans = a+b;
  printf("%d\n" ,ans);
}

int main(){
  
  int a, b ; 
  scanf("%d %d\n", &a,&b);
  addSum(a,b);
  return 0;
}