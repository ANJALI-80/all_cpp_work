//WAP to create an Abstract Class Shape.
// Make two sub-class Circle and Triangle which implements a method
// from Shape class called getArea().

#include<iostream>
using namespace std;

class shape{
	protected:
		int a=10,b=20;
	public:
		
		virtual void getarea()=0;
};

class circle:public shape{
	public:
		void Circle(){
			cout<<"it is circle....."<<3.14*a*b<<endl;
		}
};

class triangle:public circle{
	public:
		void Triangle(){
			cout<<"it is triangle....."<<a*b/2<<endl;
		}
		
		void getarea(){
			cout<<"it is shape.... "<<endl;
		}
		
};

int main(){
	triangle t;
	t.getarea();
	t.Circle();
	t.Triangle();
	
}
