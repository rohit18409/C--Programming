//Program to find prime and non-prime numbers;

#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cout<<"Enter the number: ";
	cin>>n;
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<"It is a Non-Prime number.";
			break;
		}
		else
		{
			cout<<"It is a Prime number.";
			break;
		}
	}
	//if(i==n)
//	{
//		cout<<"It is a Prime number.";
//	}
	
	return 0;
}
