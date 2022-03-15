//use of setw() manipulator //this is used to set the width of text to be printed

#include<iostream>
#include<conio.h>
#include<iomanip> //this header file contains setw() manipulator
using namespace std;

int main()
{
	int age=22,rollno=99991;
	cout<<setw(12)<<"My Rollno is"<<setw(8)<<rollno<<endl;
	cout<<setw(12)<<"My age is"<<setw(8)<<age<<endl;
	//if given width is less than value we want to store value stores as it is
	cout<<setw(2)<<"roll is"<<setw(2)<<rollno<<endl;
}
