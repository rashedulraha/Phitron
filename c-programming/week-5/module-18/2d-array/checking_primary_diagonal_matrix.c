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

    for(int i =0;i<r;i++){
    for(int j=0;j<c;j++){
    if(i==j){
      // we are new at diagonal matrix
      printf("%d " , a[i][j]);
    }else{

      //we are new at outside diagonal matrix
      if (a[i][j]!=0){
        printf("This in not a primary diagonal matrix\n");
      } 
    }
    }
  }
  if(r==c){
    //square matrix 
  }else{
    printf("This is not  a diagonal matrix");
  }
  return 0;
}