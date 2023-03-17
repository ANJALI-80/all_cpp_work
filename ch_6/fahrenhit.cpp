//WAP to convert given degree celsius temperature into
//fahrenheit and convert that fahrenheit temperature
//into kelvin by implementing multilevel inheritance:
//Class P -> Class Q -> Class R
//- Class P has following members: temperature
//attribute in float
//- Class Q has following members: toFehrenheit()
//method
//- Class R has following members: toKelvin() method

#include<iostream>
using namespace std;

class p {
	protected :
		float c;
	public :
		void set()
		{
			cout << "Enter Temperature Celsius : ";
			cin >> c;
		}
};

class q : public p{								//multipal inheritence
	public :
		void Fahrenheit()
		{
			cout << "Fahrenheit : " << (c*9/5)+32 << endl;   //logic of fahrenhit
		}
};

class r : public q{							//multileval inheritence
	public :
		void kelvin()
		{
			cout << "kelvin : " << (c+459.67)*5/9 << endl;  //logic of kelvin
 		}
}; 

int main()
{
	r r1;
	r1.set();
	r1.Fahrenheit();
	r1.kelvin();
}

