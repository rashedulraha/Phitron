#include<stdio.h>


int sum(int num1, int num2){

  int ans = num1+num2;
  return ans;
};

int main(){
  
  printf("%d",sum(5,4));
  return 0;
}