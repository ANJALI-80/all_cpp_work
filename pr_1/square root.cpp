#include<iostream>
using namespace std;

int main(){
	//input
	int n;
	
	cout<<"enter number : ";
	cin>>n;
	
	//create array
	int a[n],i,j;
	//first loop
	for(i=0;i<n;i++){
		//
		cout<< "a["<<i<<"] :" ;
		cin>>a[i];
		 
	}
		cout<<endl;
		
		for(i=0;i<n;i++){
			for(j=1;j<a[i];j++){
				
				if(j*j==a[i]){
					
				cout << "a["<< i <<"] : " <<j<< endl;
			}
		}
	
	}
}
