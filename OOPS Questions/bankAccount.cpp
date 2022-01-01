#include <iostream>
using namespace std;

class Account
{
  string userName, accNum, accType;
  float balance;
  public:
    Account()
    {
      userName = "A";
      accNum = "A";
      accType = "A";
      balance = 0.0;
    }

    Account(string name, string num, string type, float bal)
    {
      userName = name;
      accNum = num;
      accType = type;
      balance = bal;
    }

    void Deposit()
    {
      int bal;
      cout << "Enter the amount to deposit." << endl;
      cin >> bal;
      balance += bal;
    }

    void CheckAndWithdraw()
    {
      int x;
      cout << "Your current balance is: " << balance << endl;
      cout << "Enter the amount to withdraw." << endl;
      cin >> x;
      if (x <= balance)
        balance -= x;
      else
        cout << "Not enough balance." << endl;
    }

    void show()
    { cout << "Name: " << userName << endl << "Balance: " << balance << endl; }
};

int main()
{
  int ch;
  Account ac("Tanzeel", "123456789", "Savings", 20000.0);
  while(1)
  {
    cout << "Chose from the following optioins:\n1. Deposit\n2. Withdraw\n3. Show Information\n";
    cin >> ch;
    switch(ch)
    {
      case 1: ac.Deposit(); break;
      case 2: ac.CheckAndWithdraw(); break;
      case 3: ac.show(); break;
      default: cout << "Enter a valid choice." << endl;
    }
    cout << "\nEnter 1 to continue and anything else to quit." << endl;
    cin >> ch;
    if (ch != 1)
      break;
  }
}
