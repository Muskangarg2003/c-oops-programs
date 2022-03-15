#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

class quadratic
{
	private:
		int a,b,c;
	public:
		void input();
		void types_roots();
};

void quadratic::input()
{
	cout<<"enter value of a,b,c";
	cin>>a>>b>>c;
}

void quadratic::types_roots()
{
	int disc;
	disc=(b*b)-(4*a*c);
	if(disc<0)
	{
		cout<<"roots are imaginary"<<endl;
	}
	else if(disc==0)
	{
		double x;
		x=-b/(2*a);
		cout<<"roots are equal x"<<x;
	}
	else
	{
		double x1,x2;
		x1=(-b+sqrt(disc))/(2*a);
		x2=(-b+sqrt(disc))/(2*a);
		cout<<"roots are x1 and x2"<<x1<<x2;
	}
	
}

int main()
{
	quadratic q1;
	q1.input();
	q1.types_roots();
}
