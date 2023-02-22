#include<iostream>
using namespace std;
inline clc(int choice);
int main()
{
	int a,b;
	cout<<"enter a : ";
	cin>>a;
	
	cout<<"enter b : ";
	cin>>b;
	
	int choice,i;
	
	do{
		cout<<endl<<"enter 1 for addition"<<endl;
		cout<<"enter 2 for subtraction"<<endl;
		cout<<"enter 3 for multiply"<<endl;
		cout<<"enter 4 for division"<<endl;
		cout<<"enter 5 for modules"<<endl;
		cout<<"enter 6 for exit"<<endl;
		cout<<"enter right choice : ";
		cin>>choice;
		
	 system("CLS");
		switch(choice){
			case 1 :
				cout<<"addition : "<<a+b;
				break;
				
			case 2 :
				cout<<"subtraction : "<<a-b;
				break;
				
			case 3:
				cout<<"multiply : "<<a*b;
				break;
				
			case 4 :
				
				cout<<"division : " <<(float)a/(float)b;
				break;
				
			case 5 :
				
				cout<<"modules : "<<a%b;
				break;
				
			case 6 :
				break;
				
			default :
				cout<<endl<<"enter between 1 to 6";
		}
						
		
		
	}while(choice!=6);
	
	clc(choice);
}

inline clc(int choice){
	
	cout<<"thanks for using our system ...";
}
