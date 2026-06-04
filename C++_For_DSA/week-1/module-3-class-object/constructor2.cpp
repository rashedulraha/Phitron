#include <iostream>
using namespace std;

class Product
{

public:
  string name;
  string description;
  int price;

  Product(string name, string description, int price)
  {
    // this->name = name;
    // this->description = description;
    // this->price = price;
    (*this).name = name;
    (*this).description = description;
    (*this).price = price;
  };
};

int main()
{

  Product Ponds("Pond's", "This product is so great", 540);

  cout << Ponds.name << endl
       << Ponds.description << endl
       << Ponds.price << endl;
  return 0;
}