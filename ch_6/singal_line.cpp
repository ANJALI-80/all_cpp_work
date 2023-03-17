//WAP to find sum of all three number’s cubes by
//implementing single level inheritance: Class X->Class Y
//- Class X has following members: a, b & c attributes in
//integer data type
// Class Y has following members: setData() and
//getData() methods


#include<iostream>
using namespace std;

class X{
	protected :
	int a,b,c;
	
	public :
	void input(){
		
		cout<< "enter the number of a : " ;
		cin>>a;
		cout<< "enter the number of b :" ;
		cin>>b;
		cout<< "enter the number of c :" ;
		cin>>c;
	}
	
};

class Y : public X
{
	public :
		void setdata(int a,int b,int c){
			this->a=a;
			this->b=b;
			this->c=c;
			
		}
		
		void getdata(){
			
			cout<<"the sum of a,b and c : "<<a+b+c<<endl;
		}
	
};

main(){
int a,b,c;

		cout<< "enter the number of a : " ;
		cin>>a;
		cout<< "enter the number of b :" ;
		cin>>b;
		cout<< "enter the number of c :" ;
		cin>>c;
		cout<<endl<<"____________________________________________"<<endl;
		Y y1;
		y1.setdata(a,b,c);
		y1.getdata();
		cout<<endl<<"____________________________________________"<<endl;
		y1.input();
		cout<<endl<<"____________________________________________"<<endl;
		y1.getdata();
		cout<<endl<<"____________________________________________"<<endl;
		
	
}
