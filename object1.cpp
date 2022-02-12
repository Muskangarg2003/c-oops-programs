//wap to calculate area of rect by defining member function outside the class
#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
	private:
		int a,b;        //data members
	public:
		void setdata(int x,int y ) 
		{
			a=x;
			b=y;
	}
		    
		void area()    
		{
		int ar=a*b;
		cout<<"\narea of rect="<<ar;
	}
};     


int main()
{
	rectangle r1,r2;      //objects of class
	r1.setdata(5,10);     //object r1 calls data member 1
	cout<<"\n ********* RECTANGLE 1 ***********";
	r1.area();           //object r1 calls data member 2
	r2.setdata(8,7);     //object r2 calls data member 1
	cout<<"\n********* RECTANGLE 2 ************";
	r2.area();           //object r2 calls data member 2

	
}
