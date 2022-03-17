//USE OF FRIEND FUNCTION
/* it acts as bridge between two classes . To understand this ,consider a situation where we want a function to access the private data members of two
or more different classes . In order to solve this problem ,we can define this function as a friend of two or more different classes and thus able to 
access private members of that classes. and hence in this sense a friend function acts as a bridge between two classes*/

#include<iostream>
#include<conio.h>
using namespace std; 


class B;
class A
{
	private:
		int x;
    friend void f1(A,B);
	public:
		void getdata(int a)
		{
			x=a;
		}
};

class B
{
	private:
		int y;
		friend void f1(A,B);
	public:
		void getdata(int b)
		{
			y=b;
		}
};

void f1(A x1,B y1)
{
	int sum;
	sum= x1.x+y1.y;
	cout<<"the sum of data members of class A and class B"<<sum<<endl;
}


main()
{
	A ob;
	B ot;
	ob.getdata(6);
	ot.getdata(7);
	f1(ob,ot);
	
}
