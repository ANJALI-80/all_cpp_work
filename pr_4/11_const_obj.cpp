//WAP to create a class which illustrate the use of constant object.


#include<iostream>
using namespace std;

class constant {
	public :
		const int id =10;
	void getdata()
	{
		cout << "id is : " << id;
	}
};
int main()
{
	constant c;
	c.getdata();
}
