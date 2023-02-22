#include<iostream>
using namespace std;

int main()
{
	int n,sy,ey;
	
	cout<<"enter starting year : ";
	cin>>sy;
	
	cout<<"enter ending  year : ";
	cin>>ey;
	
	cout<<"enter value of n : ";
	cin>>n;
	
	int a[n],i;
	
	for(i=sy;i<=ey;i++){
		if(i%4==0){
			a[(i-sy)/4]=i;
		}
	}
	for(i=0;i<n;i++){
	
	cout<<a[i]<<endl;
}
}
