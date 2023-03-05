#include<iostream>
#include<string.h>
using namespace std;
class customer{
	
	int id;
	string name;
 	int age;
 	string telecome_brand_name  ;
 	int mobile_number;
 	string city;
 	int simcard_validity  ;
	
	public :
			void add_data(int id,int age,string  name,string  telecome_brand_name,int mobile_number, string city, int simcard_validity){
				
				this->id=id;
				this->age=age;
				this->telecome_brand_name = telecome_brand_name;
				this->simcard_validity=simcard_validity;
				this->mobile_number=mobile_number;
				this->city=city;
				this->name=name;
				
				getdata();
				
			}
			
			void getdata(){
				
				cout<<endl;
				cout<<"id is \t\t\t\t:"<<id<<endl;
				cout<<"name is \t\t\t:"<<name<<endl;
				cout<<"age is \t\t\t\t:"<<age<<endl;
				cout<<"telecome_brand_name is \t\t:"<<telecome_brand_name<<endl;
				cout<<"mobile_number is \t\t:"<<mobile_number<<endl;
				cout<<"city is \t\t\t:"<<city<<endl;
				cout<<"simcard_validity is \t\t:"<<simcard_validity<<endl;
				
				
			}
};

int main(){
	int n,i;
	
	cout<<"enter n : ";
	cin>>n;
	
 	int id;
	string name;
 	int age;
 	string telecome_brand_name;  
 	int mobile_number;
 	string city;
 	int simcard_validity  ;
	
	
	for(i=0;i<n;i++){
		cout<<endl;
		cout<< "student : "<<i+1<<"/"<<n<<endl<<endl;
	
	cout<<"enter id \t\t\t: ";
	cin>>id;
	
	cout<<"enter name \t\t\t: ";
	cin>>name;
	
	cout<<"enter age \t\t\t: ";
	cin>>age;
	
	cout<<"enter telecome_brand_name \t: ";
	cin>>telecome_brand_name;
	
	cout<<"enter mobile_number \t\t: ";
	cin>>mobile_number;
	
	cout<<"enter city \t\t\t: ";
	cin>>city;
	
	cout<<"enter simcard_validity \t\t: ";
	cin>>simcard_validity;
	
	customer c;
	
	c.add_data( id,age, name,telecome_brand_name,mobile_number, city,simcard_validity);
	
	}

}
