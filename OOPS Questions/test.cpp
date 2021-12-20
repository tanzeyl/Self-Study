
#include<iostream>
using namespace std;
class T4Tutorials
{
	protected :
		int n, i, num1,num2,num3,j;
	public :
		int checK()
		{
			num1=1,num2=1,num3=0;
			cout<<"Input  a positive integer: ";
			cin>>n;
		}
		friend int show(T4Tutorials);
};
int show(T4Tutorials a)
{
			  for(a.i=3; a.i<=a.n/2; a.i++)
		     {
				/* prime no?*/
		      a.num1=1;
		      a.num2=1;
		      for(a.j=2; a.j<a.i; a.j++)
		       {
		         if(a.i%a.j==0)
		           { a.num1=0;a.j=a.i;}
		        }
		      for(a.j=2; a.j<a.n-a.i; a.j++)
		       {
		         if((a.n-a.i)%a.j==0)
		           { a.num2=0;a.j=a.n-a.i;}
		        }
		         if(a.num1==1 && a.num2==1)
		           { printf("%d =  %d + %d  \n",a.n,a.i,a.n-a.i);
		           a.num3=1;}
		    }
         if(a.num3==0)
         {
         	cout<<a.n<<"can not be expressed as sum of two prime numbers.\n\n";
		 }
}
int main()
{
	T4Tutorials a;
	a.checK();
	show(a);
}
