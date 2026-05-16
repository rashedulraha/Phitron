// #include<stdio.h>


// int main(){
  
//   int myArray []  = {1,4,7,8,5,7,5,8,5,4,5,4,2,8};

//   int length = sizeof(myArray)/sizeof(myArray[0]);
//   printf("%d", length);

//   int count= 0;
//   int to_find = 5;

//   for(int i =0;i<length;i++){
//     if(myArray[i]==to_find) count++;
//   }

//   printf("Number of 5s found :%d\n",count);
//   return 0;
// }

// *

#include<stdio.h>


int main(){
  
  int myArray []={1,5,8,5,4,5,8,5,8,5,4,2,4,4,5,21,4,8,2};
  // question  is the to find is 2; 

  int count = 0;
  int to_find = 5;

  int length  = sizeof(myArray)/sizeof(myArray[0]);

  for(int i=0; i<length;i++){
    if (myArray[i]==to_find){
      count++;
    }
  }
  printf("Occurrences number : %d\n",count);
  return 0;
}