#include<iostream>
using namespace std;

class sum{
	int a,b;
	public :
		void input(int x, int y){
			a=x;
			b=y;
		}
		void output(){
			cout<<"the sum of "<< a << " and "<< b << " : "<< a+b;
		}
};

main(){
	int x,y;
	sum s;
	cout<<"enter valur of c :";
	cin>>x;
	cout<<"enter valur of d :";
	cin>>y;
	s.input(x,y);
	s.output();
}
