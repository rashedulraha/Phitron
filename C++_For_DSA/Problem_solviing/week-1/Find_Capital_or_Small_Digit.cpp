#include <iostream>
using namespace std;

int main() {

    char ch;
    cin >> ch;

    if (ch >= '0' && ch <= '9') {
        cout << ch << " IS NUMBER";

    } else if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " IS CAPITAL";

    } else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " IS SMALL";

    } else {
        cout << ch << " IS SYMBOL";
    }

    return 0;
}