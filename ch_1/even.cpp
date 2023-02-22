#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter n : ";
	cin>>n;
	
	int a[n],i;
	cout<<"enter value of array "<<endl;
	for(i=0;i<n;i++){
		cout<<"a"<<"["<<i<<"]";
		cin>>a[i];
		
	}
	cout <<"even is...";
	for(i=0;i<n;i++){
		
		if(a[i]%2==0){
			cout<<endl<<"a"<<"["<<i<<"]"<<a[i];
		}
	}

}
