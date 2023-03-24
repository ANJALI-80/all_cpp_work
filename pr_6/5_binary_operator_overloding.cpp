//WAP to add two objects using binary plus (+) operator overloading.

#include<iostream>
using namespace std;

class A {
	private : 
	 	int a;
	public :
		void setdata(int a)
		{
			this->a=a;
		}
	
		
		A operator+(A y)
		{
			A i;
			i.a= a+y.a;
			return i;
		}
		void get()
		{
			cout << a << endl;
		}
};
 main()
{ int a,b;
	cout<<"enther the value of a : ";
	cin>>a;
	cout<<"enther the value of b : ";
	cin>>b;
	
	A x,y,z;

	x.setdata(a);
	y.setdata(b);
	z=x+y;
	z.get();
	
	
}
