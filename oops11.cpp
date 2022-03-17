//passing object to member function  ,bcs object is variable of class datatype so we pass objects as an argument in member function

#include<iostream>
#include<conio.h>
using namespace std;

class numbers
{
	private:
		int a,b;
	public:
		void set_data(int,int);
		void setdata_bysum(numbers,numbers); //here (numbers,numbers) ka mtlb ki jo hm yha objects pass krenge uski data type numbers hogi i.e class ka name 
		                                //bcs class is user define datatype and hme uska object pass krana hai
		void print_num();
};

//now we define member function that we declare inside the class

void numbers::set_data(int x,int y)
{
	a=x;
	b=y;
}

void numbers::setdata_bysum(numbers o1,numbers o2) //yha object n1 and n2 pass kra ....o1 and o2 name change krke likha bss
{
	a=o1.a+o2.a;
	b=o1.b+o2.b;
}

void numbers::print_num()
{
	int num=a+b;
	cout<<"num is"<<num;
}


main()
{
	numbers n1,n2,n3;
	n1.set_data(2,3);
	n2.set_data(4,9);
	n3.setdata_bysum(n1,n2);
	n1.print_num();
	n2.print_num();
	n3.print_num();
	return 0;
}

