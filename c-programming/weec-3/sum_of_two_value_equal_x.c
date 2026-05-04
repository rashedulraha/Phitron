#include<stdio.h>


int main(){
  
  // input value of array size ;
  int n ; // array size number 
  scanf("%d" , &n);


  int a[n]; // array size value  //  array value is = [2,3,4,5,6]
  for(int i=0; i< n ;i++){
    scanf("%d",&a[i]);
  }

  // input value of x !
  int x ;   //* target value is = 11
  scanf("%d", &x);

  // flag variable 
  int flag = 0 ; 

  for(int i = 0; i < n-1  /* n = 5-1 = 4 */ ;i++){
    for( int j = i+1 ; j < n; j++ ){
    //  printf("%d %d\n" ,   a[i],a[j]);

    if(a[i]+a[j]==x){
      flag=1;
      printf("Yes\n");
      printf("%d %d", a[i],a[j]);
    }
    }
  }
  
  if(flag == 0){
    printf("No");
  }


  return 0;
}