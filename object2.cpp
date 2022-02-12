//wap to calculate the area of rec by defining membor function outside the clss
#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
	private:
		int a,b;        //data members
	public:
		void setdata(int ,int );     //member function 1
		void area() ;                //member function 2
};     //end of class specification

void rectangle::setdata(int x,int y) //defining member function outside class
{
	a=x;
	b=y;
}

void rectangle::area()
{
	int ar=a*b;
	cout<<"\narea"<<ar;
}
int main()
{
	rectangle r1,r2;      //objects of class
	r1.setdata(5,10);     //object r1 calls data member 1
	cout<<"/n********* RECTANGLE 1 ***********";
	r1.area();           //object r1 calls data member 2
	r2.setdata(8,7);     //object r2 calls data member 1
	cout<<"/n********* RECTANGLE 2 ************";
	r2.area();           //object r2 calls data member 2

	
}
