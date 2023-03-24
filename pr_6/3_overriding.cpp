//WAP which illustrate the use of Method Overriding concept.

#include<iostream>
using namespace std;

class A{
	public : 
		void getdata()								//defualt
		{
			cout << "c lenguage" << endl ;
		}
};
class A1 : public A{				//overriding method
	public :
		void getdata()
		 {
		 	cout << "c++" << endl;
		 }
};

int main()
{
	A e;
	e.getdata();
}
