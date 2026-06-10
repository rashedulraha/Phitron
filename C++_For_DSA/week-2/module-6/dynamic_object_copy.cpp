#include <bits/stdc++.h>
using namespace std;
class Cricketer {
public:
  string country;
  int jersey;
  Cricketer(string country, int jersey) {
    this->country = country;
    this->jersey = jersey;
  }
};
int main() {
  Cricketer *sakib = new Cricketer("Bangladesh", 100);
  Cricketer *rakib = new Cricketer("india", 10);
  rakib = sakib;

  delete sakib;

  cout << rakib->jersey << rakib->country << endl;

  return 0;
}