# include <iostream>
#include <string.h>
using namespace std;
class employee{
	
	int id;
	char name[50];
 	char role[50];
	int age;
	int salary;
 	char experience[50];
	char city[50];
 	char company_name[50];
 	
 	public:
 		
 		void input(){
		 	cout<<"enter id :";
		 	cin>>id;
		 	cout<<"enter name : ";
		 	cin>>name;
		 	cout<<"enter role : ";
		 	cin>>role;
		 	cout<<"enter age : ";
		 	cin>>age;
		 	cout<<"enter salary : ";
		 	cin>>salary;
		 	cout<<"enter experience : ";
		 	cin>>experience;
		 	cout<<"enter city : ";
		 	cin>>city;
		 	cout<<"enter company_name : ";
		 	cin>>company_name;
		 	cout<<"\n\n";
		 	
		 }
		 	void output(){
		 		cout<<" id"<<"\t\t"<<id<<endl;
		 		cout<<"name "<<"\t\t"<<name<<endl;
		 		cout<<"role"<<"\t\t"<<role<<endl;
		 		cout<<"age"<<"\t\t"<<age<<endl;
		 		cout<<"salary"<<"\t\t"<<salary<<endl;
		 		cout<<"experience"<<"\t"<<experience<<endl;
		 		cout<<"city"<<"\t\t"<<city<<endl;
		 		cout<<"company_name"<<"\t"<<company_name<<endl;
		 		cout<<"\n\n";
		 		
			 }
		 	
		 	
		 };
		 
main(){
	employee e;
	cout<<endl;
	cout<<"employee  1/5"<<endl;
	e.input();
	e.output();
	cout<<"employee  2/5"<<endl;
	e.input();
	e.output();
	cout<<"employee  3/5"<<endl;
	e.input();
	e.output();
	cout<<"employee  4/5"<<endl;
	e.input();
	e.output();
	cout<<"employee  5/5"<<endl;
	e.input();
	e.output();
	
}
	 

