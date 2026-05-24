#include <iostream>
using namespace std;

int main() {
    int a[4];

    for (int i=0;i<4;i++){
      cin >> a[i];
    }

    for (int i=0;i<4;i++){
       cout << a[i] << " ";
    }

    cout<< "\n";


    int b[5];

    for(int i=0;i<4;i++){
      b[i]=a[i];
    };

    b[4]=6;

      delete[] a; 
      for (int i=0;i<5;i++){
       cout << b[i] << " ";
    }
    return 0;
}