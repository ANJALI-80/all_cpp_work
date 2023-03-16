//WAP to read and print employee information with use of multilevel inheritance. (as like in below image)


#include<iostream>
using namespace std;

class A{
	protected:
		int id;
		string name,role,salary,ex,c_name,add,email,contact;
	public :
		void setterA()
		{
			cout << "enter the id : ";
			cin >> id;	
			cout << "Enter the  name : ";
			cin >> name;
			cout << "Enter the role : ";
			cin >> role;
		}
};
class B : public A{
	public :
		void setterB()
		{
			
			cout << "Enter salary : ";
			cin >> salary;
			cout << "Enter expereance : ";
			cin >> ex;
		}
}; 
class C : public B{
	public :
		void setterc()
		{
			
			cout << "Enter company name : ";
			cin >>c_name ;
			cout << "Enter address : ";
			cin >> add;
		}
		void getterc()
		{
			cout << "Name :" << name << endl
				 << "role :" << role << endl
				 << "Salary: " << salary << endl;
		}
		
};
class D : public C {
	public :
		void setterD()
		{
			
			cout << "Enter email: ";
			cin >> email;
			cout << "Enter contact : ";
			cin >> contact;
		}
		void getterD()
		{
			cout << "the id of employee : " << id << endl;
			cout << "the Nameof employee :" << name << endl;
			cout << "the role of employee :" << role << endl;
			cout << "the Salary of employee : " << salary << endl;
			cout << "the Expireance of employee :" << ex << endl;
			cout << "the compnay name of employee : " << c_name << endl;
			cout << "the adress of employee : " << add << endl;
			cout << "the Emailof employee :" << email << endl;
			cout << "the Contact of employee : " << contact << endl;
		}
};

int main()
{
	D obj;
	obj.setterA();
	cout<<"------------------------------------------------"<<endl;
	obj.setterB();
	cout<<"------------------------------------------------"<<endl;
	obj.setterc();
	cout<<"------------------------------------------------"<<endl;
	obj.getterc();
	cout<<"-------------------------------------------------"<<endl;
	obj.setterD();
	cout<<"-------------------------------------------------"<<endl;
	obj.getterD();
}
