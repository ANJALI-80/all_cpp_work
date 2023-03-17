#include<iostream>
using namespace std;

class time1{
	
	int h,m,s;
	
	public :
	
	void input(){
		cout<<"enter the number of hours : ";
		cin>>h;
		cout<<"enter the number of minute : ";
		cin>>m;
		cout<<"enter the number of seconds : ";
		cin>>s;
	}
	
	void output(){
		
		cout<<"the time of : "<<h<<":"<<m<<":"<<s<<endl;
	}
	
	friend class time2;
			
};

class time2{
	
	int h1,m1,s1,th,tm,ts;
	public : 
	void getdata(){
	
		cout<<"enter the number of hours : ";
		cin>>h1;
		cout<<"enter the number of minute : ";
		cin>>m1;
		cout<<"enter the number of seconds : ";
		cin>>s1;
		
		cout<<"second time of :"<<h1<<":"<<m1<<":"<<s1<<endl;
	}
	
	void putdata(time1 t){
		th=t.h+h1;
		tm=t.m+m1;
		ts=t.s+s1;
		
		if(ts>=60){
			
			ts-=60;
			tm++;
			
			
			
		}
		if(tm>=60){
			tm-=60;
			th++;
			
		}
		
		cout<<"total time is "<<th<<":"<<tm<<":"<<ts<<endl;
		
	}
};

int  main(){
	
	time1 t;
	t.input();
	t.output();
	time2 t1;
	t1.getdata();
	t1.putdata(t);	
	
	
}
