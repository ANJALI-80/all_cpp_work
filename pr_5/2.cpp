//WAP with a mother class and an inherited daugther class.
//Both of them should have a method void display ()that prints a message (different for mother and daugther).
 //In the main define a daughter and call the display() method on it.

#include<iostream>
using namespace std;

class mother {
	public :
		void diplay()
		{
			cout << "i am  MOTHER." << endl;	
		}
		
};
class daugther:public mother   //call perent class 

{
	public :
		void diplay()
		{
			cout << "i am DAUGTHER." << endl;	
		}
		
};
//calling class
int main()
{
	daugther d;
	d.daugther::diplay();
	d.mother::diplay();
}
