#include<iostream>
using namespace std;

class employe{
		int id;
		string name;
		string role;
		int salary;
		int experience;
		string address ;
		string email;
		int contact;
	public :
		void setdata()
		{
			cout << "Enter id : ";
			cin >> id;
			cout << "Enter name : ";
			cin >> name;
			cout << "Enter role : ";
			cin >> role;
			cout << "Enter salary : ";
			cin >> salary;
			cout << "Enter experience : ";
			cin >> experience;
			cout << "Enter address : ";
			cin >> address;
			cout << "Enter email : ";
			cin >> email;
			cout << "Enter contact :";
			cin >> contact; 
		}
		void getdata()
		{
			cout << "id : " << id << endl;
			cout << "name : " << name << endl;
			cout << "role : " << role << endl;
			cout << "salary : " << salary << endl;
			cout << "experience : " << experience << endl;
			cout << "address : " << address << endl;
			cout << "email : " << email << endl;
			cout << "contact : " << contact << endl;
		}		
	
};

int main()
{
	int n,i;
	
	cout<<"enter number :";
	cin>>n;
	
	employe e[n];
	 
	
	for(int i=0;i<n;i++) 
	{cout<<endl;
		cout<<"student "<<i+1<<"/"<<n<<endl<<endl;
		e[i].setdata();
	cout<<endl;
	  e[i].getdata();
	}
}
