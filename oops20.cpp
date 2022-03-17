/* FRIEND FUNCTION ----agr hmne ek aisa function bnana jo class ka nhi hai but vo class ke private members ko access krna chahta hai to hme use friend 
                   function bnana pdega mtlb use class ka freind bnana pdega only than that function is able to access data of private members of class
                   
    NOTE --aur us function ko hm call krne ke liye class ke objects ka use ni kr skte ....kyunki vo sirf data access kr skta hai but class ka part ni bna
 */
 
 #include<iostream>
 #include<conio.h>
 using namespace std;
 
 class complex
 {
 	private:
 		int a,b;
 		
 	// below line means this class allows the sum_complex function to access private members // isko hum public part mei bhi kr skte declare
 	friend complex sum_complex(complex cc1,complex cc2); //syntax of friend function === friend return type function name(arguments pass);
 	
 	public:
 		void setdata(int x,int y)
 		{
 			a=x;
 			b=y;
		}
 		
 		void getdata()
 		{
 			cout<<"the complex no. is"<<a<<"+"<<b<<"i"<<endl;
		}
 };
 
 //return type  name of function (types of argument passes)
 complex sum_complex(complex cc1, complex cc2)   //function not part of class
 {
 	complex cc3;
 	cc3.setdata((cc1.a+cc2.a),(cc1.b+cc2.b));   // we have to make this function friend function bcs here it is trying to access the private members 
 	                        // of class ...which is only possible when class itself give permission to this function to access their private members
 	return cc3;
 }
 main()
 {
 	complex c1,c2,c3;
 	c1.setdata(5,5);
 	c1.getdata();
 	c2.setdata(4,9);
 	c2.getdata();
 	c3=sum_complex(c1,c2); //this is friend function thus we are not able to call this using objects of class..
 	                       //c3.sum_complex = INVALID
 	c3.getdata();
 }
 
 
 /*PROPERTIES OF FRIEND FUNCTIONS-----
     1. not in scope of class ...mtlb friend function is not part of class
     2. since it is not in the scope of class,it cannot be called from the object of that class c1.sum_complex == invalid
     3. can be involved without the help of objects 
     4. usually contains the objects as arguments
     5 . can be declared inside public or private section of class
     6. it cannot access the members directly by their names and need object name
     mtlb function ke andar directly ni access kr skte c1.a(i.e object name is needed)
   */
     
     
 

             
