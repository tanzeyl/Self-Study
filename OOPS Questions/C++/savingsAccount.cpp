#include <iostream>
using namespace std;

class Account
{
  static int annualInterestRate;
  int savingsBalance;
  public:
    Account(int a)
    { savingsBalance = a; }

    void calculateMonthlyInterest()
    {
      float interest;
      interest = (savingsBalance * annualInterestRate)/12.0;
      savingsBalance += interest;
      cout << "Monthly interest is: " << interest << endl;
    }

    void show()
    { cout << "Balance is: " << savingsBalance << endl; }

    static modifyInterestRate(int a)
    { annualInterestRate = a; }
};
int Account::annualInterestRate = 4;

int main()
{
  Account saver1(2000), saver2(3000);
  saver1.calculateMonthlyInterest();
  saver2.calculateMonthlyInterest();
  saver1.show();
  saver2.show();
  Account::modifyInterestRate(5);
  saver1.calculateMonthlyInterest();
  saver2.calculateMonthlyInterest();
  saver1.show();
  saver2.show();
}
