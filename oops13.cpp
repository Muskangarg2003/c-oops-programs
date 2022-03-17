//returning object from a function
#include<iostream>
#include<conio.h>
using namespace std;

class time
{
	private:
		int hours,minutes;
	public:
		void set_time();
		time add_time(time); //time is datatype(user defined) and here we return object of data type time
		void show_time();
};

void time::set_time()
{
	cout<<"enter time in hours and minutes";
	cin>>hours>>minutes;
	cout<<endl;
}

time time::add_time(time at2)
{
	time temp;
	int min=minutes+at2.minutes;
	int hrs=min/60;
	temp.minutes =min%60;
	temp.hours=hrs+hours+at2.hours;
	return temp;
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
	t3=t1.add_time(t2);     //t3=t1,t2;
	t3.show_time();
	return 0;
}
