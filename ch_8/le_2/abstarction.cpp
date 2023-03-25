//WAP to perform some basic mathematical operations
//using Abstract class such like:
//- area of circle
//- area of triangle
//- area of rectangle
//- use one single pure virtual function named
//calculate() to perform all above operations

#include<iostream>
using namespace std;

class calculate{
	public :
		virtual void area_of_circle()=0;
		virtual void area_of_triangle()=0;
		virtual void area_of_rectangle()=0;
		
	
};

class circle :public calculate{
	int a;
	public :
		void area_of_circle(){
			cout<<"enter value for circle :";
			cin>>a;
			
		}
		
		void circle_getdat(){
			
			cout<<"the area of circle is :"<<3.14*a*a<<endl;
		}
	
	
};

class triangle : public circle{
	int l,w;
	public :
		void area_of_triangle(){
			
			cout<<"enter value for length :";
			cin>>l;
			cout<<"enter value for width :";
			cin>>w;
		}
		
		void triangle_getdata(){
			cout<<"the triangale is :"<<0.5*l*w<<endl;
			
		}
		
	
};

class rectangle : public triangle{
	int l,w;
	public:
	void area_of_rectangle(){
			cout<<"enter value for length :";
			cin>>l;
			cout<<"enter value for width :";
			cin>>w;
		
	}
	
	void rectangle_getdata(){
		cout<<"the rectangle is : "<<l*w<<endl;
	}
};

main (){
	
	calculate *a;
	rectangle b;
	a=&b;
	 
	b.area_of_circle();
	b.circle_getdat();
	b.area_of_triangle();
	b.triangle_getdata();
	b.area_of_rectangle();
	b.rectangle_getdata();
	
	
	
	
}
