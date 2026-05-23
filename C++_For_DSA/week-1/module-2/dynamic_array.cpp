#include <iostream>
using namespace std;

int main() {
    // int a[8]; static array
   
     int * a = new int [5]; // dynamic array 

    for(int i =0;i<8;i++){
      cin>>a[i];
    }
     for(int i =0;i<8;i++){
      cout << a[i] << " ";
    }
    return 0;
}