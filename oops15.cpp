//STATIC DATA MEMBERS --these are data memmbers jinko ek baar memory allocate hoti inki actual copy object ko milti that means koi bhi object change 
//kr skta static data member ki value ....mtlb agr ek object ne us variable ki value change kr di to next object ke pass new value jayegi variable ki
// 2. point is ki ise initialy define kr skte ......by default static variable ki value 0 hoti hai

//data members -----ye jo variables ki unki copy bnti jitne object hote aur ek ek copy alg alg objects ke pass jati mtlb jitne objects utne baar memory 
//allocate hoti.....and agr ek object ne us variable(data member) ki value change kr di to next object mei change vali value ni jayegi ...kyunki hr object 
//ke pass actual data member ki copy hai...to uss change ka koi efect ni pdega
//secondly  use initialize ni kr skte 

#include<iostream>
#include<conio.h>
using namespace std;

class employee
{
	int id;    //here int id=86; i.e initialisation is not possible //this is only possible when static variable
	static int count;  //static variable ko class ke bahr define krte;
	
	public:
		void setdata()
		{
			cout<<"enter the id ="<<endl;
			cin>>id;
			count++; //if count is not static variable to count++ krne ka koi fayda ni tha bcs count=1000 rehna tha hr object ke liye
		}
		
		void getdata()
		{
			cout<<"the id of employee is"<<id<<endl<<"this is employee number"<<count<<endl;
		}
};

int employee::count=1000;; //by default value is 0 //define static variable 

main()
{
	employee e1,e2;
	e1.setdata();
	e1.getdata();
	e2.setdata();
	e2.getdata();
	return 0;

}
