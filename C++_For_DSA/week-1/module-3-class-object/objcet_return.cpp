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

//  check return time to value
Product func()
{
  Product ponds("Pond's", "This product is so great", 540);
  cout << "print ponds";
  return ponds;
}
int main()
{

  // check object retrun value check ;
  // Product Ponds("Pond's", "This product is so great", 540);

  // cout << Ponds.name << endl
  //      << Ponds.description << endl
  //      << Ponds.price << endl;

  //* call function
  Product obj = func();
  // cout << func.name;
  //* print product object value;

  cout << obj.name << endl
       << obj.description << endl
       << obj.price << endl;

  return 0;
}