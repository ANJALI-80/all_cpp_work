//WAP to get and display N numbers of Diamond
//companies information using encapsulation and use of
//parameterised constructor by including below
//mentioned attributes:

#include<iostream>
using namespace std;

class diamond{
	int id,s_con,rev,r_dia,n_ed;
	string name,ceo;
	public :
		diamond(string name,string ceo,int id,int s_con,int rev,int r_dia,int n_ed)//peramiterrized constructar
		{
			this->name=name;
			this->ceo=ceo;
			this->id=id;
			this->s_con=s_con;
			this->rev=rev;
			this->r_dia=r_dia;
			this->n_ed=n_ed;
		}
		void output(){
			cout<<"The name : "<<name<<endl;
			cout<<"The name of ceo : "<<ceo<<endl;
			cout<<"The id : "<<id<<endl;
			cout<<"The staff quantity : "<<s_con<<endl;
			cout<<"The revenue : "<<rev<<endl;
			cout<<"The no. of raw diamonds : "<<r_dia<<endl;
			cout<<"The no. of diamonds exported : "<<n_ed<<endl;
		}
		
		~diamond(){
			cout<<endl<<"thank you for using our system.";
		}
};

main(){
	int n;
	cout<<"Enter the number of diamond company : ";
	cin>>n;
	
	int id,s_con,rev,r_dia,n_ed,i;
	string name,ceo;
	
	for(i=1;i<=n;i++){
		cout<<endl;
		cout<<"company : "<<i<<"/"<<n<<endl;
		cout<<"enter the name : ";
		cin>>name;
		cout<<"enter the id : ";
		cin>>id;
		cout<<"enter the ceo : ";
		cin>>ceo;
		cout<<"enter the staff quantity : ";
		cin>>s_con;
		cout<<"enter the revenue : ";
		cin>>rev;
		cout<<"enter the raw diamonds : ";
		cin>>r_dia;
		cout<<"enter the exported diamonds : ";
		cin>>n_ed;
		cout<<endl;
		diamond d(name,ceo,id,s_con,rev,r_dia,n_ed);	   			//call peramiterized constructor
		cout<<endl;
		d.output();
	}	
}
