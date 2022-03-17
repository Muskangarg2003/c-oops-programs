//CONSTRUCTOR OVERLOADING
/*When we provide more than one constructor in class .this is called constructor overloading
  constructor overloading allows a class to have more than one constructors that have same name as that of class but differs
  only in terms of numbers of parameter or parameters datatype or both.*/
  
  
#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
	int a,b;
	
	public:
		complex()    //constructor 1 //default constructor
		{
			a=0;
			b=0;
		}
		
		complex(int x,int y)   //constructor 2 //with two parameter
		{
			a=x;
			b=y;
		}
		
		complex(int x)    //constructor 3 with one parameter and with one default value
		{
			a=x;
			b=5;
		}
		
		void printnumber()
		{
			cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
		}
};

main()
{
	complex c1(4,6);  //object 1
	c1.printnumber();
	complex c2(5);    //object 2
	c2.printnumber();
	complex c3;       //object 3
	c3.printnumber();
}
