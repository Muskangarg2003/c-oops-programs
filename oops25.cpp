// PARAMETERISED CONSTRUCTOR ---
/*When we pass one or more arguments to a constructor. this type of constructors which take parametrs is known as 
  parameterised constructor*/
  
//USE OF PARAMETERISED CONSTRUCTOR
/* using these constructor,it is possible to initialise the object with different set of values at their time of creation
   mtlb jaise hi object bnayenge saath hi uski value intialise kr skte ,jitne object utne alg set of values initialise kr 
   skte ...there are two ways to set the value -(explict call and implicit call)*/
   
#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
	private:
		int a,b;
	public:
		void print_num()
		{
			cout<<"your number is"<<a<<"+"<<b<<"i"<<endl;
		}
	    
	    // parameterised constructor (must be declare or define in public part of class)
	    complex(int x ,int y)
	    {
	    	a=x;
	    	b=y;
		}
};
   
main()
{
	//there are two types to pass arguments to constructor at the time when we create object
	//using constructor sath hi avlue intialise krdi alg se alg function bna ke usko call krke usme value pass krne ki jrrort ni
	//IMPLICIT CALL
	complex ob1(4,6); 
	
	// EXPLICIT CALL
	complex ob2=complex(5,7);
	
	ob1.print_num();
	ob2.print_num();
}
   
  

