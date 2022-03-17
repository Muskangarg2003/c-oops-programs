//program to multiply two matrices by returning an object from a function

#include<iostream>
#include<conio.h>
using namespace std;

class matrix
{
	private:
		int a[10][10],m,n;
	public:
		void input();
		matrix mul(matrix);
		void show();
};

void matrix::input()
{
	cout<<"enter order of matrix";
	cin>>m>>n;
	cout<<"enter elements";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
}

matrix matrix::mul(matrix mm2)
{
	if(n!=mm2.m)
	{
		cout<<"here multiplication is not possible";
	    exit(0);
	}
	
	matrix temp;
	temp.m=m;
	temp.n=mm2.n;
	for(int i=0;i<temp.m;i++)
	{
		for(int j=0;j<temp.n;j++)
		{
			temp.a[i][j]=0;
			for(int k=0;k<n;k++)
			{
				temp.a[i][j]=temp.a[i][j]+a[i][k]*mm2.a[k][j];
			}
		}
	}
	return temp;
}

void matrix::show()
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
			
		}
		cout<<endl;
	}
}

main()
{
	matrix m1,m2,m3;
	m1.input();
	m2.input();
	m3=m1.mul(m2);
	cout<<"on multiplication we get";
	m3.show();
	return 0;
	
}
