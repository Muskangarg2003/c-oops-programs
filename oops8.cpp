//define member functions outside the class

#include<iostream>
#include<conio.h>
using namespace std;

class rectangle
{
	private:   //jo terms private mei lgayenge use directly excess ni kr skte main mei jo functions class mei vo hi access kr skte agr ye na bhi likhenge
		       // to bydefault saare  hi private hote
    int a,b;
    
    public:   //iske baad vale sare main mei access ho skte 
    
    void setdata(int,int);   //member function declaration // now we define these outside classes
    void area();   //member function declaration
};

void rectangle::setdata(int x,int y)
{
	a=x;
	b=y;
	//here this function acess a and b bcs setdata function is part of class
}

void rectangle::area()
{
	int ar=a*b;
	cout<<"area of rec"<<ar<<endl;
}

int main()
{
	rectangle r1,r2;    //object of datatype rectangle
	r1.setdata(5,10);   //object r1 calls setdata()
	cout<<"for rectangle 1"<<endl;
	r1.area();          //objects r1 calls area()
	//r1.a=10;      // not possible bcs a is private data member we cant access here 
	r2.setdata(10,20);  //object r2 calls setdata()
	cout<<"for rectangle 2"<<endl;
	r2.area();
}
