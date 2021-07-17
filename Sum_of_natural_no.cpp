#include<iostream>
using namespace std;

int main()
{
	int n, sum;
	cout<<"Enter the number upto where you want to add: ";
	cin>>n;	
	
	for(int i=1; i<=n; i++)
	{
		sum=sum+i;	
	}
	cout<<"The sum of natural nos till n is: "<<sum<<endl;
	return 0;
}
