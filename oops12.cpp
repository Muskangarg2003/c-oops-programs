//pasing the objects as argument by value

#include<iostream>
#include<conio.h>
using namespace std;

class time
{
	private:
		int hours,minutes;
	public:
		void set_time();
		void add_time(time, time); //time is datatype(user defined)
		void show_time();
};

void time::set_time()
{
	cout<<"enter time in hours and minutes";
	cin>>hours>>minutes;
	cout<<endl;
}

void time::add_time(time at1, time at2)
{
	int min=at1.minutes+at2.minutes;
	int hrs=min/60;
	minutes=min%60;
	hours=hrs+at1.hours+at2.hours;
}

void time::show_time()
{
	cout<<"time obtain on adding";
	cout<<hours<<":"<<minutes;	
}

main()
{
	time t1,t2,t3;
	t1.set_time();
	t2.set_time();
	t3.add_time(t1,t2);     //t3=t1,t2;
	t3.show_time();
	return 0;
}
