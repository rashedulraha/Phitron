#include <bits/stdc++.h>
using namespace std;

class Bank_account {
private:
  double balance;

public:
  void deposit(double balance) { this->balance += balance; }
  void withDrow(double withrow) { this->balance -= balance; }
  void showBalance() { cout << this->balance << endl; };
};

int main() {
  // Encapsulation

  Bank_account Personal_account;

  Personal_account.deposit(4.6);
  Personal_account.showBalance();
  Personal_account.withDrow(2);
  Personal_account.showBalance();

  return 0;
}