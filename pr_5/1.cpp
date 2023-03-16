//WAP that defines a shape class with a constructor that gives value to width and height.
 //The define two sub-classes triangle and rectangle, that calculate the area of the shape area ().
 // In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.

#include<iostream>
using namespace std;

//class one

class shape{
	protected :
		int  width,height;
	public :
		shape()   //constructor
		{
			cout << "Enter width:";
			cin >> width;
			cout << "Enter height :";
			cin >> height;
		}
};

//sub class 

class triangle : public shape             // call perent class
{
	public :
		void trianglearea()   //method
		{
			cout << "Triangle area : " << (width * height) / 2 << endl;
		}
				
	
};

//sub class

class Rectangle : public shape            //call perent class
{
	public :
		void Rectanglearea()  //method
		{
			cout << "Rectangle area : " << width * height << endl;
		}	
};

//calling

int main()
{
	Rectangle r;
	r.Rectanglearea();
	triangle t;
	t.trianglearea();
}


