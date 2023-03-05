#include<iostream>
using namespace std;

class home {
	int farnicure;
	char name[20];
	char color[20];
	int size;
	int windows;
	
	public :
		void input(){
			cout<<" Enter room name \t:";
			cin>>name;
			cout<<"Enter no. of farnitures \t:";
			cin>>farnicure;
			cout<<" Enter color \t:";
			cin>>color;
			cout<<" Enter room size \t:";
			cin>>size;
			cout<<" Enter no. of windows  \t:";
			cin>>windows;
			
		}
		void output(){
			cout<<"\n room name :"<<name;
			cout<<"\n no. of farnituers :"<<farnicure;
			cout<<"\n Color :"<<color;
			cout<<"\n room size :"<<size;
			cout<<"\n no. of windows  :"<<windows;
			
		}
};

main(){
	home h;
	int i,n;
	cout<<"enter room no. : ";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<"\n\nroom "<<i<<"/"<<n<<endl;
		h.input();
		h.output();
	}
		
}
