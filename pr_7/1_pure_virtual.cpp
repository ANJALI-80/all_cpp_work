//WAP to illustrate the abstract class in C++.

#include<iostream>
using namespace std;

class A{
	public :
		virtual void print()=0;
};

class B:public A{
	public:
	void print(){
		cout<<"hello world...."<<endl;
	}	
	
};

int main(){
	A *o1;
	B b;
	o1=&b;
	o1->print();
}
