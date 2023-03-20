//WAP to create a class which have both static data member and static member function. 
//That class gives details of all states in India.


#include<iostream>
using namespace std;

class india{
	public :
		static int totel;     //static data member 
		static void state();  //static member function		
};
int india :: totel = 28;      //call static member (datatype->class name->scope resolution->member name->find input otherwise intialize value.)
void india :: state ()			//call static member functiion(	datatype->class name->scope resolution->function name->().)																						
{
	string statename[]={"Andhra Pradesh", "Arunachal Pradesh", "Assam", "Bihar", "Chhattisgarh", "Goa", "Gujarat", "Haryana", "Himachal Pradesh", "Jharkhand", "Karnataka", "Kerala", "Madhya Pradesh", "Maharashtra", "Manipur", "Meghalaya", "Mizoram", "Nagaland", "Odisha", "Punjab", "Rajasthan", "Sikkim", "Tamil Nadu", "Telangana", "Tripura", "Uttar Pradesh", "Uttarakhand", "West Bengal"};
	cout << "Totel state : " << totel <<endl ;
	int i;
	for( i=0;i<28;i++)
	{
		cout << i+1 << " " << statename[i] << endl;
	}
}

int main()
{
	india ::state();
	
}

