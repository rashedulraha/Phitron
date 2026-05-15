#include<stdio.h>

void print_array(int a[],int n,int i){

  if(i==n){
    return ;
  }

  printf("%d\n",a[i]);

  print_array(a,n,i+1);
};


int main(){
  
  int n; //7 
  scanf("%d",&n); // scan input value

  int a[n];  // n = 7 //* // 0 = 2 , 1 = 5 , 2 = 2 , 3 = 4 , 4 = 5 ,5 = 4 , 6 = 7

  for (int i=0;i<n;i++){
    scanf("%d",&a[i]); // 0 = 2 , 1 = 5 , 2 = 2 , 3 = 4 , 4 = 5 ,5 = 4 ,6 = 7
  }

  print_array(a,n,0);

  // printf("%d",n);
  return 0;
}