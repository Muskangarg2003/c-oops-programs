/*  member function of one class as a friend of another class


here 1. two classes bnayenge (complex and calculator)
     2. jo second class hogi(calculator) uska koi function class 1st(complex) ke public members ko access krna chahta
     3. uske liye hme second class ke uss function ko friend bnana pdega class 1st mei
     4. if there are  more than one function jinhe friend bnana pdega us class mei to hum puri class ko hi friend class bna denge
     
IMP POINTS --1. jo second class hogi use upr bnanyenge 
             2.usme jo 1st class ka kuch use krne ke liye compiler ko btana pdega ki niche ek aur class hai(complex) ukse liye forward declaration krenge
             3. jo second class hogi (calculator) usme jo function bnaynge to vo define baad mei krenge class 1st bnane ke baad pehle bss use declare krenge
*/

#include<iostream>
#include<conio.h>
using namespace std;

//Forward declaration (ki mtlb vo class age hai jiska bhi name likhenge
class complex;

class calculator
{
	public:
		int sum_realvalue(complex,complex);  //only define here
		
		/*
		int sum_realvalue(complex o1,complex o2)  hum yha declare nhi krenge kyunki compiler ko nhi pta ki jo apan objects use krke value
		{                                         aceess kr rhe vo object create hue ke nhi to baad mei krenge declare
			return(o1.a+o2.a)
		}    
		*/
};

 class complex
 {
 	private:
 		int a,b;
 		
 	//below line means the sum_realvalue function of class calculator is able to access data of private member of class complex 
 	//this can be defined in public or private part
 	friend int calculator::sum_realvalue(complex,complex);
 	
 	public:
 		void setdata(int x,int y)
 		{
 			a=x;
 			b=y;
		}
 		
 		void getdata()
 		{
 			cout<<"the real part of complex no. is"<<a<<"+"<<b<<"i"<<endl;
		}
 };
 
 int calculator::sum_realvalue(complex o1,complex o2)
 {
 	return(o1.a+o2.a);
 }
 
 main()
 {
 	complex c1,c2;
 	calculator cal;
 	int res;
 	c1.setdata(4,5);
 	c1.getdata();
 	c2.setdata(6,7);
 	c2.getdata();
 //	res=sum_realvalue(c1,c2);//inavlid because this is now part of class so we call this using object of class calculator
    res=cal.sum_realvalue(c1,c2);
    
 	cout<<"the sum of real part of two complex no.  is"<<res<<endl;
 	
 	
 }
