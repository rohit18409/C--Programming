#include<iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cout<<"Enter the positive no: ";
	cin>>n;
	
	while(n<0)
	{
		sum=sum+n;
		cout<<"Enter the positive: ";
		cin>>n;
	}
	cout<<"The sum is: "<<sum<<endl;
	return 0;
}
