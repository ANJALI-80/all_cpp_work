
#include <iostream>
using namespace std;
 
class Time
{

    int hours;
    int minutes;
    int seconds;
 
public:
    void Time_input(){
    
    cout << "Seconds :"; 
	 cin>>seconds;
	 
	 cout<<endl;
	}
    void Time_output(){
    cout << endl;
    cout <<"format is: " <<hours << ":" << minutes << ":" << seconds << endl;
	}
    void addTime( Time T1){
	seconds=T1.seconds;
    minutes=T1.minutes+ seconds/60;;
    hours= T1.hours + (seconds/3600);
    minutes %=60;
    seconds %=60;
	}
};
 
 int main()
{
    Time T1,T3;
    T1.Time_input();
    

    T3.addTime(T1);
    T3.Time_output();
     
    
}

