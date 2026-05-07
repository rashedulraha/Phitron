#include<stdio.h>
#include <stdlib.h>


int main(){

  int n ; 
  scanf("%d", &n);
  
  long long int arr[n];

  for(int i = 0; i<n;i++){
    scanf("%lld",&arr[i]);
  }
  
  long long int sum = 0; 
  for(int i = 0; i<n;i++){
   
    // if(arr[i]>0){
    //     sum += arr[i];
    // } 
     sum += arr[i];
    
  }
  
if(sum<0){
  sum*= -1;
}
  printf("%lld",sum);

  
  return 0;
}