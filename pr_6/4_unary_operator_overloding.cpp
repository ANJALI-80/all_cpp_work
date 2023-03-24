//WAP to demonstrate usage of Virtual Function.

#include<iostream>
using namespace std;

class A {
	private : 
	 	int a;
	public :
		A(int a)
		{
		
			
			cout<<"enter the value of a : ";
			cin>>a;
			
				this->a=a;
		}
		A()
		{
		}
		
		A operator++()												//operator incriment overloding
		{
			A com;
			com.a= ++a;
			return com;
		}
		A operator--()							//operator decriment  overloding
		{
			A com;
			com.a= --a;
			return com;
		}
		void get()
		{
			cout << a << endl;
		}
	
	
};

int main()
{
	
	
	A a1(10);
	A a2;
	A a3; 
	
	a2= ++a1;                       
	a3= --a1;
	
	a2.get();
	a3.get();
	
	
}
