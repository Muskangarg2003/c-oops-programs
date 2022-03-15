#include<iostream>
#include<conio.h>
#include<iomanip>  // this header file contains setbase() operator

using namespace std;

main()
{
	int i;
	cout<<"enter hexadecimal number="<<endl;
	cin>>setbase(16)>>i;
	cout<<"hexadecimal value ="<<setbase(16)<<i<<endl;  //here we set base ki konse number system mei value chahiye
	cout<<"decimal value="<<setbase(10)<<i<<endl;
	cout<<"octal value "<<setbase(8)<<i<<endl;
	return 0;
}
