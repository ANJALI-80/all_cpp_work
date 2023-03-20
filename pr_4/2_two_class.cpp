#include<iostream>
using namespace std;

class first{
	private :
		int id;
		int age;
		int std;
		string name;
		string sc_n;
		string div;
	public :
		void setdata()
		{
			cout << "Enter id : ";
			cin >> id;
			
			cout << "Enter age : ";
			cin >> age;
			
			cout << "Enter std: ";
			cin >> std;
			
			cout << "Enter name : ";
			cin >> name;
			
			cout << "Enter school name : ";
			cin >> sc_n;
			
			cout << "Enter division : ";
			cin >> div;
			
		 
		}
		void getdata()
		{
			cout << "ID : " << id << endl;
			cout << "AGE : " << age<< endl;
			cout << "STD : " <<  std<< endl;
			cout << "NAME : " << name << endl;
			cout << "SCHOOL NAME : " <<sc_n  << endl;
			cout << "DIVISION : " << div << endl;
		}
};
class second{
	private :
		first s;
	
	public :
		void read()
		{
			s.setdata();
			
			 
		}
		void print()
		{
		 	s.getdata();
			 
		}
};

int main()
{
		int n,i;
			cout<<"enter the number : ";
			cin>>n;
			
	second s[n];
	cout<<endl;
	for(i=0;i<n;i++){
		 
	cout<<"student : "<<i+1<<"/"<<n<<endl;
	cout<<endl;
	s[i].read();
	cout<<"*******************************************"<<endl;
	s[i].print();
	cout<<"*******************************************"<<endl;
}
}

