#include<iostream>
using namespace std;

class feet {
	int feet1,feet2,in1,in2,a,b;
	public :
	void input(){
	cout<<"enter feet :";
	cin>>feet1;
	cout<<"enter inch :";
	cin>>in1;
	cout<<"enter feet :";
	cin>>feet2;
	cout<<"enter inch :";
	cin>>in2;
	}
	void output(){
		int a,b;
		
			if(in1>12){
			in1=in1-12;
			feet1=feet1+1;
			}
			cout<<"feet is : "<<feet1<<" and "<<"inch is :"<<in1<<endl;
	
			if(in2>12){
			in2=in2-12;
			feet2=feet2+1;
			
		}
			cout<<"feet is : "<<feet2<<" and "<<"inch is "<<in2 <<endl;
		
			a = feet1+feet2;
			b = in1+in2;
			if(b>12){
			b=b-12;
			a=a+1;
			cout<<"total is "<<a<<" feet and "<<b<<" inch "<<endl;
		}
		
		
		
	}
};

main(){

	feet f;
	f.input();
	f.output();
}
