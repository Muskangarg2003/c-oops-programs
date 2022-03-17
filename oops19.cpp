//program to add two english diss by returning object from function

#include<iostream>
#include<conio.h>
using namespace std;

class dis
{
	private:
		int feet ;
		double inches;
	public:
		void setdata();
	    void showdata();
	    dis add_dis(dis);
};

void dis::setdata()
{
	cout<<"enter dis in feets and inches";
	cin>>feet>>inches;
	cout<<endl;
}

void dis::showdata()
{
	cout<<"dis is"<<feet<<":"<<inches<<endl;
}

dis dis::add_dis(dis dis2)
{
	dis temp;
	temp.feet=feet+dis2.feet;
	temp.inches=inches+dis2.inches;
	
	if(temp.inches>12)      //1 feet=12 inches
	{
		temp.feet++;
		temp.inches=temp.inches-12;
	}
	return (temp);
}

int main()
{
	dis d1,d2,d3;
	d1.setdata();
	d1.showdata();
	
	d2.setdata();
	d2.showdata();
	
	d3=d1.add_dis(d2);
	d3.showdata();
	return 0;
}
