//WAP to illustrate the use of access modifiers in inheritence.

#include<iostream>
using namespace std;

class A{
	protected :
		int a,b;
		public:
			
		void input(){
			cout<<"enter a:";
			cin>>a;
			cout<<"enter b:";
			cin>>b ;
		}
		
};

class B:public A{
	public:
		virtual void getsumdata()=0;
};

class C:public B{
	public:
		void getsumdata(){
			cout<<"the sum of :"<<a+b<<endl;
			
		}
};

int main(){
	C c;
	c.input();
	c.getsumdata();
	c.getsumdata();
	
}
