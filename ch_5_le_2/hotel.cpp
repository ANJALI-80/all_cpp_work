#include<iostream>
using namespace std;

class hotel{
	
	int id;
	int rating; //(like 1 Star, 2 Start, ..., 7 Star)
	int establish_year;
	int staff_quantity;
	static int room_quantity;
	string name;
	string type; //(like hotel or motel)
	string location; //(city name)
	
	
		public :
	
		void setdata(){
			
			cout<<"The id : ";
			cin >>id;
			
			cout<<"The rating: ";
			cin >>rating;
				
			cout<<"The establish_year : ";
			cin >>establish_year;
			
			//cout<<"The staff_quantity : ";
		//	cin >>staff_quantity;
			
			cout<<"The  name : ";
			cin >> name;
			
			cout<<"The type : ";
			cin >>type;
			
			cout<<"The location : ";
			cin >>location;
			cout<<"******************************************"<<endl;
			cout<<endl;
			getdata();
			
		 
		}	
		
		void getdata(){
			cout<<"The id : "<<id<<endl;
			cout<<"The rating: "<<rating<<endl;
			cout<<"The establish_year : "<<establish_year<<endl;
			cout<<"The staff_quantity : "<<staff_quantity<<endl;
			cout<<"The  name : "<<name<<endl;
			cout<<"The type : "<<type<<endl;
		 	cout<<"The location : "<<location<<endl;
			cout<<"the room_quantity"<<room_quantity<<endl; 
			cout<<endl;
		}
};

int hotel ::room_quantity=20;

 main(){
	 
	int n,i;
	cout<<"enter number of hotel : ";
	cin>>n;
	
	hotel h[n];
	
	for(i=0;i<n;i++){
		cout <<"hotel : " <<i+1<<"/"<<n<<endl;
		h[i].setdata();
		cout<<"**************************************"<<endl;
	}
}
