#include<iostream>
using namespace std;
int main()
{
	int n, sum=0, i,p;
	cout<<"Enter the no: ";
	cin>>n;
	
	for(i=0; i<=n; i++)
	{
		cout<<"Enter the value: ";
		cin>>p;
		if(p>=0)
		{
			sum=sum+p;
		}
	}
	cout<<"The sum is: "<<sum<<endl;
	return 0;
}
