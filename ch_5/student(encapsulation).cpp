#include<iostream>
#include<string.h>
using namespace std;
class student{
	
	int id;
 	string name;
 	int age;
 	string course;
 	string email;
 	string city;
	string college;
	
	public :
			void add_data(int id,int age,string  name,string  course,string  email, string city, string  college){
				
				this->id=id;
				this->age=age;
				this->city = city;
				this->college=college;
				this->course=course;
				this->email=email;
				this->name=name;
				
				getdata();
				
			}
			
			void getdata(){
				
				cout<<endl;
				cout<<"id is      :"<<id<<endl;
				cout<<"name is    :"<<name<<endl;
				cout<<"age is     :"<<age<<endl;
				cout<<"course is  :"<<course<<endl;
				cout<<"email is   :"<<email<<endl;
				cout<<"city is    :"<<city<<endl;
				cout<<"college is :"<<college<<endl;
				
				
			}
};

int main(){
	int n,i;
	
	cout<<"enter n : ";
	cin>>n;
	
	int id,age;
	string name,course,email,city,college;
	
	
	for(i=0;i<n;i++){
		cout<<endl;
		cout<< "student : "<<i+1<<"/"<<n<<endl<<endl;
	
	cout<<"enter id : ";
	cin>>id;
	
	cout<<"enter name: ";
	cin>>name;
	
	cout<<"enter age : ";
	cin>>age;
	
	cout<<"enter course : ";
	cin>>course;
	
	cout<<"enter email : ";
	cin>>email;
	
	cout<<"enter city : ";
	cin>>city;
	
	cout<<"enter college : ";
	cin>>college;
	
	student s;
	
	s.add_data( id,age, name,course,email, city,college);
	
	}

}
