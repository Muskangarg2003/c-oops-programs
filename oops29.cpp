                       //DYANAMICALLY INITIALISATION OF CONSTRUCTOR USING OBJECTS
/* the data members of object after creation can be initialised at run time using constructors .such initialisation of data
 members is called dyanmic
 
 mtlb jaise hum object bnate hi value set krdete the vo ni krna ...uski jgh run time pe set of values input krani hai
 jis trh ki set of value input kraynege vo constructor call hoga
           aur jab object bnayenge to constructor call hoga lekin vha hum values nhi de rhe to ek default constructor bnana 
           pdega jo kuch na kre .....aur agr yr ni krna to second method bhi hai jisse default constructor na bnana pde*/


#include<iostream>
#include<conio.h>
using namespace std;

class height 
{
	private:
		int feet;
		double inches;
	public:
		height()         //constructor 1
		{
			feet=0; inches=0;  
		}
		
		height(int f)    //constructor 2
		{
			feet=f;      
			inches=0; 
		}
		
		height(double f)   //constructo 3
		{                                                    //for ex double f=5.5
			feet=int(f);                                    // feet=int(feet)=int(5.5)=5
			inches=(f-int(f))*12;  // 1 feet=12 inches      // inches=(5.5-5)*12=6
			                                                // ans is 5 feet 6 inches
		}
		
	    height(int f,double in) //constructor 4 //jis parameter acc value bhrenge vhi vala call hoga
	    {
	    	feet=f;
	    	inches=in;
		}
		
		void show()
		{
			cout<<"feet="<<feet<<"    inches="<<inches<<endl;
		}
};
main()
{
	height h1,h2,h3;
	int ht_feet;
	cout<<"enter height in terms of feet only:";
	cin>>ht_feet;
	h1=height(ht_feet);
	
	double ht_fract;
	cout<<"enter height in fractional form:";
	cin>>ht_fract;
	h2=height(ht_fract);
	
	int ft1;
	double in1;
	cout<<"enter height in terms off feets and inches";
	cin>>ft1>>in1;
	h3=height(ft1,in1);
	
	h1.show();
	h2.show();
	h3.show();
	
	
}
