#include<stdio.h>


int main(){
  
  int row,col;
  scanf("%d %d",&row,&col);

  int a[row][col];
  //for loop to store array element
  for (int i=0;i<row;i++){
    for (int j=0;j<col;j++){
      scanf("%d",&a[i][j]);
    }
  }

  int rp; 
  scanf("%d",&rp);
  for(int r = 0 ; r<col; r++){
    printf("%d ",a[rp][r]);
  }
  printf("\n");


  int cp; 
  scanf("%d",&cp);

  for(int c=0;c<row;c++){
    printf("%d ",a[cp][c]);
  }
  // for (int i=0;i<row;i++){
  //   for (int j=0;j<col;j++){
  //     printf("%d ",a[i][j]);
  //   }
  //   printf("\n");
  // }
  return 0;
}