#include<stdio.h>


int main(){
  
  
   int r,c ;
  scanf("%d %d",&r,&c);

  int a[r][c];

  for(int i =0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&a[i][j]);
    }
  }


  // if(r==1){
  //   printf("This is row matrix");
  // }else{
  //   printf("This in not row matrix");
  // }

  if(r==c){
    printf("This is square matrix");
  }else{
    printf("This in not square matrix");
  }
  
  return 0;
}