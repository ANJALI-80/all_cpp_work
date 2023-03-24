//WAP to create a class that contains four member functions, with 0, 1, 2, and 3 int arguments, respectively.
// Create a main( ) that makes an object of your class and calls each of the member functions.
 // Now modify the class so it has instead a single member function with all the arguments defaulted.
 
 #include<iostream>
using namespace std;

class A{
	public :
		void print()
		{
			cout << "hello...." << endl;
		}
		void print(int a)
		{
			cout << a << endl;
		}
		void print(int a,int b)
		{
			cout << a  << " " << b << endl;
		}
		void print(int a, int b, int c)
		{
			cout << a << " " << b << " " << c << endl;
		}
		
};
int main()
{
	int a,b,c;
	
	cout<<"enter the value of a :";
	cin>>a;
	cout<<"enter the value of b : ";
	cin>>b;
	cout<<"enter the value of c : ";
	cin>>c;
	A a1;
	a1.print();
	a1.print(a);
	a1.print(a,b);
	a1.print(a,b,c);
}
