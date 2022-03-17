//CONSTRUCTOR WITH DEFAULT ARGUMENTS---
/* When constructor call hoga jab object create hoga agr object ne kam values pass kri to constructor default values use krega
 jo hum constructor ko define krte time likhenge
 
 if the constructor call during object creation doesnot specify all the arguments then the omitted arguments can take defalut
 values specified in constructor defination*/
 
#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
	int a,b;
	
	public:
		complex(int x=7,int y=6)    //x=7 qand y=6 are default arguments //agr object creation ke time argument specify na
		{                           //hua to ye values miljegi a and b ko
			a=x;
			b=y;
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
	complex c2(5);    //object 2//here second value nhi specify ki to b ko default value miljegi
	c2.printnumber();
	complex c3;       //object 3
	c3.printnumber();
}
