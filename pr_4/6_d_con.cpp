//WAP to demonstrate example of default constructor or no argument constructor.
#include<iostream>

using namespace std;

class stud{
	string name,s_n;
	int id,age,std;
	public :
	stud () {						//default constructor
		cout<<"enter the name of student : ";
		cin>>name;
		cout<<"enter the id of student : ";
		cin>>id;
		cout<<"enter the age of student : ";
		cin>>age;
		cout<<"enter the standard of student : ";
		cin>>std;
		cout<<"enter the school name of student : ";
		cin>>s_n;
		
		cout<<endl<<endl;
		
		cout<<"studant name :"<<name<<endl;
		cout<<"studant sd :"<<id<<endl;
		cout<<"studant age :"<<age<<endl;
		cout<<"studant std :"<<std<<endl;
		cout<<"studant school name :"<<s_n<<endl;
		
		
	}
};

int main (){
	
	stud s;
}

