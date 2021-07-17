#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout<<"Enter the first no: ";
	cin>>a;
	cout<<"\nEnter the second no: ";
	cin>>b;
	cout<<"\nEnter the third no: ";
	cin>>c;
	
	if(a>b)
	{
		if(a>c)
		{
			cout<<"The largest number is: "<<a;
		}
		else
		{
			cout<<"The largest is: "<<c;
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"The largest is: "<<b;
		}
		else
		{
			cout<<"The largest is: "<<c;
		}
	}
	
	return 0;
}
