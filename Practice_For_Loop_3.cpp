#include<iostream>
using namespace std;

int main()
{
	int n, sum=0;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<"The natural numbers are: ";
	for(int i=1; i<=n; i++)
	{
		cout<<" "<<i;
		sum=sum+i;
	}
	cout<<"\nSum of the natural numbers are: "<<sum<<endl;
	return 0;
}
