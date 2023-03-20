//WAP to demonstrate example of parameterized constructor.

#include<iostream>
using namespace std;

class stud{
	protected :
	int id,age,std;
	string name,s_n;
	public :
		void input(){
			cout<<"enter the name of student : ";
			cin>>name;
			cout<<"enter the school name of student : ";
			cin>>s_n;
			cout<<"enter the id of student : ";
			cin>>id;
			cout<<"enter the age of student : ";
			cin>>age;
			cout<<"enter the standard of student : ";
			cin>>std;
		}
};

class stud2 : public stud
{
	
	public :
		void setdata(int id,int age,int std,string name,string s_n){
			this->id=id;
			this->age=age;
			this->std=std;
			this->name=name;
			this->s_n=s_n;
				
		}
		
		void getdata (){
			
			cout<<"the id of student : "<<id<<endl;
			cout<<"the name of student : "<<name<<endl;
			cout<<"the age of student : "<<age<<endl;
			cout<<"the standard of student : "<<std<<endl;
			cout<<"the school name of stydent : "<<s_n<<endl;		
			}
	
};

int main(){
	
	int id,age,std;
	string name,s_n;
			cout<<"enter the name of student : ";
			cin>>name;
			cout<<"enter the school name of student : ";
			cin>>s_n;
			cout<<"enter the id of student : ";
			cin>>id;
			cout<<"enter the age of student : ";
			cin>>age;
			cout<<"enter the standard of student : ";
			cin>>std;
		stud2 s;
		s.setdata(id,age,std,name,s_n);
		
		cout<<endl;
		s.getdata();
		cout<<endl;
		s.input();
		cout<<endl;
		s.getdata();
			
	
}
