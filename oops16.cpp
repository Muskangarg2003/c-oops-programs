#include<iostream>
#include<conio.h>
using namespace std;


class student
{
	private:
		int rollno,marks;
		static int tot_marks;
	public:
		void read()
		{
			cout<<"enter rollno and marks";
			cin>>rollono>>marks;
			cout<<endl;
		}
		
		void cal()
		{
			tot_marks=tot_marks+marks;
		}
		
		static void avg_permarks(int n1)
		{
			double avg;
			avg=double(tot_marks)/n1;
			cout<<"avg percentage of marks="<<avg<endl;
		}
};

int student::tot_marks;

main()
{
	student s[50];
	int n;
	cout<<"enter no. of students";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s[i].read();
		s[i].call();
	}
	student::avg_permarks(n);
	
}
