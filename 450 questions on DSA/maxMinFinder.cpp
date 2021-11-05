#include <iostream>
using namespace std;

void maxMinFind(int [], int);

int main()
{
    int n, i;
    cout << "Enter the number of elements in your array.\n"; cin >> n;
    int a[n];
    cout << "Enter the elements.\n";
    for(i=0; i<n; i++) cin >> a[i];
    maxMinFind(a, n);
    return 0;
}

void maxMinFind(int a[], int n)
{
    int i, large, small;
    large = small = a[0];
    for(i=0; i<n; i++)
    {
        if (a[i] > large)
            large = a[i];
        if (a[i] < small)
            small = a[i];
    }
    cout << "Largest element is: " << large << endl;
    cout << "Smallest element is: " << small << endl;
}
