//WAP to print rate of interests of different banks using
//hierarchical inheritance:
//- Class RBI -> Class SBI
//- Class RBI -> Class BOB
//- Class RBI -> Class ICICI
//- inherit rate attribute and getROI() method in all child classes
#include<iostream>
using namespace std;

class RBI{
	protecte
	float rate;
	public : 
	void putdata(){
		cout<<"rate of "<<rate<<"%"<<endl;
	}	
};
 
 class SBI : public RBI{
 	public :
 	 SBI(){
	  
 		cout<<"enter the rate of sbi : ";
 		cin>>rate;
}
 	
 };
 class BOB : public RBI{
 	public :
 	 BOB(){
	  
 		cout <<"enter the rate of bob : ";
 		cin>>rate;
}
 };
 
 class ICICI :public RBI{
 	public : 
 	 ICICI(){
	  
 		cout<<"enter the rate of icici : ";
 		cin>>rate;
}
 };
 
 main(){
 	
 	SBI s;
 	BOB b;
 	ICICI i;
 	
 	s.putdata();
 	b.putdata();
 	i.putdata();
 	
 }
