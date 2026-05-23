// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int* arr = new int[n]; // dynamic array

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     delete[] arr; // memory free

//     return 0;
// }



#include <iostream>
using namespace std;

int* func(){
  int *a = new int [5];
    for (int i=0;i<5;i++){
      cin >> a[i];
    }
  return a;
}

int main() {
   int * p =  func();
     for (int i=0;i<5;i++){
      cout << p[i] << " ";
    }  
  return 0;
}