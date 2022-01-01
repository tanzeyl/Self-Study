#include <iostream>
using namespace std;

class Invoice
{
  string pNumber, pDesc;
  float quan, price;
  public:
    Invoice()
    { };

    Invoice(string num, string desc, int q, int p)
    {
      pNumber = num;
      pDesc = desc;
      quan = q;
      price = p;
    }

    void setPNumber(string num)
    { pNumber = num; }

    void setPDesc(string desc)
    { pDesc = desc; }

    void setQuan(int q)
    {
      if (q <=0)
        quan = 0;
      else
        quan = q;
    }

    void setPrice(int p)
    {
      if (p <=0)
        price = 0;
      else
        price = p;
    }

    string getPNumber()
    { return pNumber; }

    string getPDesc()
    { return pDesc; }

    float getQuan()
    { return quan; }

    float getPrice()
    { return price; }

    float getInvoiceAmount()
    {
      cout << "Part number: " << pNumber << endl << "Description: " << pDesc << endl;
      return quan * price;
    }
};

int main()
{
  Invoice v("21425", "A very heavy hammer.", 2, 80);
  cout << v.getInvoiceAmount();
}
