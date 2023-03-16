//WAP to read and print employee information using multiple inheritance.

#include<iostream>
using namespace std;

class A{ 																//class one
	protected :
		int id,age;
		string name,contect;
		
	public :
		void inputa(){
			cout << "Enter id : ";
			cin >> id;
			cout << "Enter Name : ";
			cin >> name;
			cout << "Enter age : ";
			cin >> age;
			cout << "Enter contect : ";
			cin >> contect;
		}
};
class B{
	protected :																	//class two
		string company_name,role;
	public :
		void inputb(){
			cout << "Enter company_name : ";
			cin >> company_name;
			cout<<"enter the role of employee : ";
			cin>>role;
		}
};
class employee : public A,public B  								  //multipal inheritance.
{
	public :
		void output()
		{
			 cout<<"the id of employee : "<<id<<endl;
			 cout<<"the name of employee : "<<name<<endl;
			 cout<<"the age of employee : "<<age<<endl;
			 cout<<"the role of employee : "<<role<<endl;
			 cout<<"the contect of employee : "<<contect<<endl;
			 cout<<"the company name of employee : "<<company_name<<endl;
		}
};

int main()
{
	 employee e;
	 e.inputa();
	 e.inputb();
	 
	 cout<<"***********************************************"<<endl;
	 e.output();
	 	
	 
	 
	 
}
