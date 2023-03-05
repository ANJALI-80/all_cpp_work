
#include <iostream>
using namespace std;
 
class Time
{

    int hours;
    int minutes;
    int seconds;
 
public:
    void Time_input(){
    cout << "Enter time:" << endl<<endl;
    cout << "Hours : ";    
	cin>>hours;
    cout << "Minutes : ";  
	cin>>minutes;
    cout << "Seconds :"; 
	 cin>>seconds;
	 
	 cout<<endl;
	}
    void Time_output(){
    cout << endl;
    cout <<"add two time : " <<hours << ":" << minutes << ":" << seconds << endl;
	}
    void addTime( Time T1,Time T2){
	seconds=T1.seconds+T2.seconds;
    minutes=T1.minutes+T2.minutes + seconds/60;;
    hours= T1.hours+T2.hours + (minutes/60);
    minutes %=60;
    seconds %=60;
	}
};
 
 int main()
{
    Time T1,T2,T3;
    T1.Time_input();
    T2.Time_input();

    T3.addTime(T1,T2);
    T3.Time_output();
     
    
}
