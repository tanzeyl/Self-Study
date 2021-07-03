#include <iostream>
int main()
{
int a = 10;
int &r = a;
std::cout << a;
r++;
std::cout << r;
std::cout << a;
return 0;
}