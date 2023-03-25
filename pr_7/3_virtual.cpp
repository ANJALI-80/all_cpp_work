//WAP to demonstrate usage of Virtual Function.

#include<iostream>
using namespace std;

class A{
	protected:
		int a,b;
		public:
		void input(){
			cout<<"enter a : ";
			cin>>a;
			cout<<"enter b : ";
			cin>>b;
		}
		
	virtual	void getsumdata(){
			cout<<"the sum is :"<<a+b<<endl;
			
		}
		
	
};

class B:public A{
	public:
		void getsubtractiondata(){
			cout<<"the subtraction is : "<<a-b<<endl;
			
		}
		
		void getsumdata(){
			cout<<" sum : "<<a+b<<endl;
			
		}
};

int main(){
	B b;
	b.input();
	b.getsumdata();
	b.getsubtractiondata();
}
