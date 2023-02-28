#include <iostream>
#include <string.h>
using namespace std;
class car{
	
	int	id;
	char company_name[20];
	char color[20];
	char model[20];
	char release_year[20];
 	public:
 		
 		void input(){
		 	cout<<"enter id :";
		 	cin>>id;
		 	cout<<"enter company_name : ";
		 	cin>>company_name;
		 	cout<<"enter color : ";
		 	cin>>color;
		 	cout<<"enter model : ";
		 	cin>>model ;
		 	cout<<"enter release_year : ";
		 	cin>>release_year;
		 	cout<<"\n\n";
		 	
		 }
		 	void output(){
		 		cout<<" id"<<"\t\t"<<id<<endl;
		 		cout<<"company_name "<<"\t"<<company_name<<endl;
		 		cout<<"color"<<"\t\t"<< color <<endl;
		 		cout<<"model"<<"\t\t"<<model<<endl;
		 		cout<<"release_year"<<"\t"<<release_year<<endl;
		 	 
		 		cout<<"\n\n";
		 		
			 }
		 	
		 	
		 };
		 
int main(){
	car c;
	int i;
	for(i=0;i<=4;i++){
		cout<<"car"<<"\t"<<i+1<<"/4"<<endl;
	c.input();
	c.output();	
	}
}

