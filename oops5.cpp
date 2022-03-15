//setprecision() manipulator ---used to control precision of floating point i.e no. of digits to be right of decimal point//by default it is 6

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	float a=122.67899;
	cout<<setprecision(2)<<a<<endl;
	cout<<setprecision(3)<<a<<endl;
	return 0;
	
}
