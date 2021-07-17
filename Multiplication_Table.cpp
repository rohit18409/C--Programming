#include<iostream>
using namespace std;
int main()
{
	int i,a;
	cout<<"Enter a positive no: ";
	cin>>a;
	
	for(i=1;i<=a;++i)
	{
		cout<<a<<"*"<<i<<"="<<a*i<<endl;
	}
	
	return 0;
}
