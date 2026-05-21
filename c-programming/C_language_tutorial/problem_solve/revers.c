#include<stdio.h>


int main(){
  
  int arr[]={1,2,3,4,5,6};

  int length  = sizeof(arr)/sizeof(arr[0]);
  int temp= 0;

  for(int i=0;i<(length/2);i++){
    temp= arr[i];
    arr[i]=arr[length-i-1];
    arr[length-i-1]=temp;
  };

  for (int i =0;i<length;i++){
    printf("arr[%d] = %d\n",i,arr[i]);
  }

  return 0;
}