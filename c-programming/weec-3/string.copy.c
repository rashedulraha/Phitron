#include<stdio.h>
#include<string.h>


int main(){
  

  // int name = 4 ;

  // for(int i=0; i<=5;i++){
  //   printf("%d\n",i);
  // }


  char a[101],b[1001];
  scanf("%s %s",a,b);

  strcpy(a,b);

  printf("%s %s", a ,b);

  
  return 0;
}