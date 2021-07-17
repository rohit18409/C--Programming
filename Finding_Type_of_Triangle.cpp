#include<iostream>
using namespace std;

int main()
{
	int l, b, h;
	cout<<"Length of the Traingle is: ";
	cin>>l;
	cout<<"Breadth of the Traingle is: ";
	cin>>b;
	cout<<"Height of the Traingle is: ";
	cin>>h;
	
	if(l==b && b==h && h==l)
	{
		cout<<"It is a Equilateral Triangle.";	
	}
	else if(l==b || l==h || b==h)
	{
		cout<<"It is an Isosceles Triangle.";
	}
	else
	{
		cout<<"It a is Scalene Triangle";
	}
	
	return 0;
}
