#include <iostream>
using namespace std;

void add(int, int);

int main()
{
    add(5,4);
}

inline void add(int a, int b)
{
    cout << a+b;
}
