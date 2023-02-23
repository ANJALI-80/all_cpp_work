#include<iostream>
using namespace std;

int main()
{
	int sy,ey,n;
	
	cout<<"enter starting year : ";
	cin>>sy;
	
	cout<<"enter starting year : ";
	cin>>ey;
	
	cout<<"enter starting year : ";
	cin>>n;
	
	int a[n],i;
	
	for(i=sy;i<ey;i++){
		
		if(i%4==0){
			a[(i-sy)/4]=i;
		}
	}
	
	
	for(i=0;i<n;i++){
		
		cout<<a[i]<<endl;
	}
}
