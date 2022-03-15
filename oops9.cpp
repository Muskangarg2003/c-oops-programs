//nested member functions

#include<iostream>
#include<conio.h>
using namespace std;

class employee
{
	private:
	    char emp_name[20];
	    double basic_pay;
	    double cal_da()  //private member function not accessible from outside class// accesible inside the functions of public part of class
	    { 
		    double da=0.5*basic_pay;
		    return(da);
	    }
	
	    double cal_hra() //private member function 
	    {
		    double hra=0.15*basic_pay;
		    return(hra);
	    }
	
	public:
	    void input();       //data members declaration
		void display_salary();    		
};

void employee::input()
{
	cout<<"enter emlpoyee name";
	cin>>emp_name;
	cout<<endl<<"enter basic pay of employee";
	cin>>basic_pay;     
	// basic_pay and emp_name are private we only access here bcs this function is part of public in class 
}

void employee::display_salary()
{
	double gross_sal;
	double da=cal_da();  // this function is part of private in class
	double hra=cal_hra(); //this function is part of private in class
	gross_sal=basic_pay+da+hra;
	cout<<"gross sal of employee="<<gross_sal;
}

int main()
{
	employee emp1;
	emp1.input();
	emp1.display_salary();
	//emp1.cal_da() not directly accessible bcs this is private function
}


