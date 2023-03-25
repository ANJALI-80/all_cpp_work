//WAP to abstract some attributes of class Admin to
//prevent them to be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has following members:
//- company_name
//- manager_salary
//- employee_salary
//- total_staff
//- total_annual_revenue
//- can_terminate
//- use all attributes accessibility in parent class and
//- override a method myAccess() in both child
//classes to display all parent class’s members value
//accordingly.

#include<iostream>
using namespace std;

class admin{
	protected :
		
	string  company_name,can_terminate;
	int manager_salary,employee_salary,total_staff,total_annual_revenue;
	
	public :
		void myaccess(){
			cout<<"enter the company name :";
			cin>>company_name;
			cout<<"enter can terminate :";
			cin>>can_terminate;
			cout<<"enter the manager salary :";
			cin>>manager_salary;
			cout<<"enter employee salary :";
			cin>>employee_salary;
			cout<<"enter total staff :";
			cin>>total_staff;
			cout<<"enter total annual revenue :";
			cin>>total_annual_revenue;
			
			
			cout<<endl;
			cout<<" company name :"<<company_name<<endl;
			cout<<"can terminate :"<<can_terminate<<endl;
			cout<<" manager salary :"<<manager_salary<<endl;
			cout<<" employee salary :"<<employee_salary<<endl;
			cout<<" total staff :"<<total_staff<<endl;
			cout<<"enter total annual revenue :"<<total_annual_revenue<<endl;
			
		}
	
	
};
class manager : public admin{
	public :
		void myaccess(){
			cout<<" company name :"<<company_name<<endl;
			cout<<" manager salary :"<<manager_salary<<endl;
			cout<<" employee salary :"<<employee_salary<<endl;
			cout<<" total staff :"<<total_staff<<endl;
		
		}
	
	
};
class employee : public manager{
	public :
		void myaccess(){
			cout<<" company name :"<<company_name<<endl;
			cout<<" employee salary :"<<employee_salary<<endl;
		
		}
	
};

int main ()
{
	employee e;
	cout<<endl;
	e.admin::myaccess();
	cout<<"\n";
	e.manager::myaccess();			//call scope resolution
	cout<<"\n";
	e.myaccess();
	

}
