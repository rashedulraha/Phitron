#include <bits/stdc++.h>
using namespace std;

int main() {

  // createing enums

  // enum Level { LOW, MEDIUM, HIGH };

  // DECLARE ENUM
  // enum Level myvar = MEDIUM;
  // enum Level myvar = HIGH;
  // enum Level myvar = LOW;

  // PRINT MY VAR

  // cout << myvar << endl;

  // Create an enum variable and assign a value to it
  // enum Level myVar = MEDIUM;

  // Print the enum variable
  // cout << myVar;

  // change the valuse
  // enum Level {
  //   LOW = 34,
  //   MEDIUM = 54,
  //   HIGH = 65,
  // };

  // enum Level nothing = MEDIUM;
  // cout << nothing << endl;

  // auto increment enum values

  // enum Level {
  //   LOW = 3,
  //   MEDIUM,
  //   HIGH,
  // };

  // // create enum

  // enum Level myVar = MEDIUM;
  // cout << myVar << endl;

  //* enum in switch statements

  enum Level {
    LOW = 1,
    MEDIUM,
    HIGH,
  };

  enum Level myvar = MEDIUM;

  switch (myvar) {
  case1:
    cout << "Low level";
    break;
  case 2:
    cout << "Medium level";
    break;
  case 3:
    cout << "High Level";
    break;
  }
  return 0;
}
