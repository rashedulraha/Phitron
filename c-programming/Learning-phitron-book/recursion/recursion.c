#include<stdio.h>

void func1 (int i , int n ){
  if(i==n+1) return ;

  printf("%d\n" ,i);
  func1(i+1,n);
}


int main(){
  
  int n ; 
  scanf("%d",&n);
  func1(1,n);
  return 0;
}