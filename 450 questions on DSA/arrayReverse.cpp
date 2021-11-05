#include <iostream>
using namespace std;

void printArray(int [], int);
void revArray(int [], int);

int main()
{
    int n, i;
    cout << "Enter the number of elements in your array.\n"; cin >> n;
    int a[n];
    cout << "Enter the elements.\n";
    for(i=0; i<n; i++) cin >> a[i];
    cout << "\nArray before revrsing: ";
    printArray(a, n);
    revArray(a, n);
    cout << "\nArray after reversing: ";
    printArray(a, n);
    return 0;
}

void printArray(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
        cout << a[i] << " ";
}


void revArray(int a[], int n)
{
    int i, temp;
    for(i=0; i<n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}
