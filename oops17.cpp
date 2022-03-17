//static functions ---static functions vo functions hai jo static member ko access krte hai (static member---static variable and static functions)......
// and static function ko call krne ke liye object ki jroort ni...using class name usee call kr skte haii

#include<iostream>
#include<conio.h>
using namespace std;

class employee
{
	int id;
	static int count;
	
    public:
    void setdata()
    {
    	cout<<"enter the id of employee"<<endl;
    	cin>>id;
    	count++;
	}
	
	void getdata()
	{
		cout<<"the id of this employee"<<id<<"and this is employee no"<<count<<endl;
	}
	
	static void getcount()  //this function is call using class name no object is needed
	{
		cout<<"the value of count is"<<count<<endl;  
	}
};

int employee::count=1000;

main()
{
	employee emp1,emp2,emp3;
	
	emp1.setdata();
	emp1.getdata();
	employee::getcount(); //we call static function in this way
	
	emp2.setdata();
	emp2.getdata();
	employee::getcount();
	
	emp3.setdata();
	emp3.getdata();
	employee::getcount();
	
	return 0;
	
	
	
}
