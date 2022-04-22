#include <iostream>
using namespace std;

void towerOfHanoi(int, char, char, char);

int main()
{
    int n;
    char a = 'A', b = 'B', c = 'C';
    cout << "Enter the number of discs." << endl;
    cin >> n;
    towerOfHanoi(n, a, b, c);
}

void towerOfHanoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << "Move " << 1 << " from " << a << " to " << c << endl;
        return;
    }
    towerOfHanoi(n-1, a, c, b);
    cout << "Move " << n << " from " << a << " to " << c << endl;
    towerOfHanoi(n-1, b, a, c);
}
