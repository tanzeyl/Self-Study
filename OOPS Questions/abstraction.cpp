#include <iostream>
using namespace std;

class Abstraction
{
	int a, b;
	public:
		void set(int x, int y)
		{ a = x; b = y; }

		void display()
		{ cout << "A = " << a << endl << "B = " << b << endl; }
};

int main()
{
	Abstraction obj;
	obj.set(10, 20);
	obj.display();
  // obj.a = 20;
  // obj.b = 30;
  // The above two lines will not work as data members a and b are private in the class.
	return 0;
}
