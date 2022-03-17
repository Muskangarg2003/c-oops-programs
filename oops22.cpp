//FRIEND CLASS--- when more than one function of class want to access the private member of other class

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
		int sum_imgvalue(complex,complex);
};

 class complex
 {
 	private:
 		int a,b;
 		
 	//below line means all the functions of class calculator is able to access data of private member of class complex 
 	//this can be defined in public or private part
 	friend class calculator;
 	
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
 int calculator::sum_imgvalue(complex oo1,complex oo2)
 {
 	return(oo1.b+oo2.b);
 }
 
 
 main()
 {
 	complex c1,c2;
 	calculator cal,cal1;
 	int res,img;
 	c1.setdata(4,5);
 	c1.getdata();
 	c2.setdata(6,7);
 	c2.getdata();
 //	res=sum_realvalue(c1,c2);//inavlid because this is now part of class so we call this using object of class calculator
    res=cal.sum_realvalue(c1,c2);
    img=cal1.sum_imgvalue(c1,c2);
    
 	cout<<"the sum of real part of two complex no.  is"<<res<<endl<<"the sum of imaaginary part"<<img<<endl;
 }
 	
 	

