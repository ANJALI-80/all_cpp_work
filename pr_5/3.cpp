//WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function.
 //Then create two bases variables Zebra and Dolphin which write a message telling 
 //the age, the name and giving some extra information (e.g. place of origin).
 


#include<iostream>
using namespace std;

//perent class
class animal{
	protected:
		int age;
		string name;
	public :
		void intputa()
		{
			cout << "Enter age : ";
			cin >> age;
			cout << "Enter Name : ";
			cin >> name;
		}
};

//child class 
class zebra : public animal      //call perent class
{
	protected:
		string place;
	public :
		void inputz()
		{
			cout << "Enter place : ";
			cin >> place;
		}
		void outputz()
		{
			cout << "name :" << name << endl;
			cout<< "Age  :" << age  << endl;
			cout << "Place:" << place << endl;
		}

	
};
class dolphin : public animal{
	protected:
		string col;
	public :
		void inputd()
		{
			cout << "Enter colour : ";
			cin >> col;
		}
		void outputd()
		{
			cout << "name  :" << name << endl
				 << "Age   :" << age  << endl
				 << "colour:" << col << endl;
		}	
};
int main()
{
	zebra z;
	z.intputa();
	z.inputz();
	
	cout<<endl;
	z.outputz();
	
	
	
	cout << endl;
	
	
	
	dolphin d;
	d.intputa();
	d.inputd();
	
	cout<<endl;
	d.outputd();
}
