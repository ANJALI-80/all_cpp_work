// WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.

#include<iostream>
using namespace std;

class num{						//perent class call in all child class.
	protected :
		int a;
	public :
		num()						//constructer
		{
			cout << "Enter A : ";
			cin >> a;
		}
};

class square  : public num{
	public :
		void getsquare()				//print method
		{
			cout << "A : " << a*a;			//a*a logic for square
		}
};
class cube  : public num{
	public :
		void getcube()				//print method
		{
			cout << "A : " << a*a*a;		//a*a*a logic for cube
		}
};

int main()
{

	square s;
	s.getsquare();
	
	cout<<endl;
										//no requared for call perent class, because it is counstructer 
	cube c;
	c.getcube();
}
	

