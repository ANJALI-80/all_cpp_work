#include<iostream>
using namespace std;

class school{
	private :
		static int n;
		int id,age;
		string name,mno,add;
		static string institute;
		static int std;
		static int roll;
	public :
		void setdata()
		{
			id = ++n;
			++roll;
			cout << "Enter name : ";
			cin >> name;
			cout << "Enter Age : ";
			cin >> age;
			cout << "Enter mobial number : ";
			cin >> mno;
			cout << "Enter add : ";
			cin >> add;	
		}
		void getdata()
		{
			cout << "id : " << id << endl;
			cout << "roll no : " << roll << endl;
			cout << "name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Std : " << std << endl;
			cout << "institute : " << institute << endl;
			cout << "mobial number : " << mno << endl;
			cout << "Add : " << add << endl;
		}
};
int school::n=0;
int school::std=9;
int school::roll=0;
string school::institute="xyz";
class colleg{
	private :
		static int n1;
		int id,age;
		string name,mno,add;
		static string institute1;
		static int std1;
		static int roll1;
	public :
		void setdata()
		{
			id = ++n1;
			++roll1;
			cout << "Enter name : ";
			cin >> name;
			cout << "Enter Age : ";
			cin >> age;
			cout << "Enter mobial number : ";
			cin >> mno;
			cout << "Enter add : ";
			cin >> add;	
		}
		void getdata()
		{
			cout << "id : " << id << endl;
			cout << "roll no : " << roll1 << endl;
			cout << "name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Std : " << std1 << endl;
			cout << "institute : " << institute1 << endl;
			cout << "mobial number : " << mno << endl;
			cout << "Address : " << add << endl;
		}
};
int colleg::n1=0;
int colleg::std1=9;
int colleg::roll1=0;
string colleg::institute1="xyz";
int main()
{
	int n,j,k,i;
	cout<<"enter the number of school : ";
	cin>>n;
	cout<<endl;
	
	school s;
	for(i=0;i<n;i++){
		cout<<"student of  : "<<i+1<<"/"<<n<<endl<<endl;
	s.setdata();
	cout<<endl;
	s.getdata();
	cout<<endl;
	}
	cout<<"enter the number of collegise : ";
	cin>>j;
	cout<<endl;
	
	colleg c;
	for(i=0;i<j;i++){
	cout<<"collegise of  : "<<i+1<<"/"<<j<<endl;
	
	c.setdata();
	cout<<endl;
	c.getdata();
	cout<<endl;
}
}
