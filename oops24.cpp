//   CONSTRUCTORS
/* constructor is a special member function with the same name as of class . constructors are used to initialize the values
  classes mei sidha value intialize ni kr skte jaise a=10(or many more).....uske liye constructor bnana pdega
  It is used to intialize the objects of class ...It is automatically invloved whenever object is created(mtlb jab bhi 
  object bnayenge to constructor member function ke andar vala code run hojega khud se''
*/

#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
	private:
		int a,b; //here a=10; directly is not possible
	public:
		void print_number();
		//constructor must be declared in the public part of class
		complex(void); //constructor declaration //used to initialize value 
		               //default constructors--because inme hum koi value pass ni kr rhe
};

void complex::print_number()
{
	cout<<"the number is"<<a<<"+"<<b<<"i"<<endl;
}

complex::complex(void)
{
	a=10;     //this is constructor ..that why we define alue here
	b=5;
	cout<<"hello"<<endl;
}

main()
{
	complex c1,c2;//jaise hi object create krenge to complex constructor wala code apne aap run hojega 
	              //hmne jo hello print kraya vo object bnte hi print hojegi
	c1.print_number();
	c2.print_number();
}


//CHARACTERISTICS OF CONSTRUCTORS
/* 1.it should be declared in the public section of class
   2.they are automatically invloved(called) when object is created
   3. they cannot return values and do not have return types
   4. it can have default arguments
   5. we cannot refer to their adress
