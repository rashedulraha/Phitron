#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* arr = new int[n]; // dynamic array

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr; // memory free

    return 0;
}