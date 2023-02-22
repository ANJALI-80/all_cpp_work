//use inline function

#include<iostream>
using namespace std;

inline f(int fact);
int main()
{
int n;
	cout<<"enter number : ";
	cin>>n;
	
	int fact=1,i,j;
	
	for(i=1;i<=n;i++){
		
		fact=fact*i;
	 
	}
	f(fact);
}
inline f(int fact){

	cout<<"factoriyal is : "<<fact;
}
