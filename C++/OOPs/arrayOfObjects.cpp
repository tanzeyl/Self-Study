#include <iostream>
using namespace std;
class Sum
{
    int a,b;
    public:
        void num()
        {
            cout<<"enter the number"<<endl;
            cin>>a>>b;
        }
        int sum()
        {
            return (a+b);
        }

};

int main()
{
    Sum c;
    c.num();
    cout<<c.sum();
}
