#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

main()
{
	double bas_sal;
	cout<<"enter basic salary=";
	cin>>bas_sal;
	double dear_all=0.40*bas_sal;
	double hou_rent=0.20*bas_sal;
	double gross_sal=bas_sal+dear_all+hou_rent;
	cout<<setw(20)<<"Dearness allowance="<<setw(8)<<dear_all<<endl;
	cout<<setw(20)<<"House rent="<<setw(8)<<hou_rent<<endl;
	cout<<setw(20)<<"Gross pay="<<setw(8)<<gross_sal<<endl;
	return 0;
}
