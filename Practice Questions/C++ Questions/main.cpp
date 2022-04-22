#include <iostream>
using namespace std;

int main()
{
    int i = 2, first = 0, second = 1, third, n;
    cin >> n;
    cout << first << " " << second << " ";
    third = first + second;
    while(i < n)
    {
        cout << third << " ";
        first = second;
        second = third;
        third = first + second;
        i++;
    }
}
