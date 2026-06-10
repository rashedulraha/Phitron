#include <bits/stdc++.h>
using namespace std;

float toCelsius(float fahrenheit) { return (5.0 / 9.0) * (fahrenheit - 32.0); }

int main() {
  // real life example
  float f_value = 98.8;
  float result = toCelsius(f_value);

  // Print the fahrenheit value
  cout << "Fahrenheit: " << f_value << "\n";

  // Print the result
  cout << "Convert Fahrenheit to Celsius: " << result << "\n";
  return 0;
}