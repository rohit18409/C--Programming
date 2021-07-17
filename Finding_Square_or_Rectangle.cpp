#include<iostream>
using namespace std;

int main()
{
	int l, b, a;
	cout<<"Enter the length of the Rectangle: ";
	cin>>l;
	cout<<"Enter the breadth of the Rectangle: ";
	cin>>b;
	a=l*b;
	
	if(l==b)
	{
		cout<<"It is a Square.\n";
		cout<<"Area of Square is: "<<a;
	}
	else
	{
		cout<<"It is a Rectangle.\n";
		cout<<"Area of Rectangle is: "<<a;
	}
	return 0;
}
