#include <iostream>
using namespace std;

int main() 
{
	int b;
	cin>>b;
	while(b--)
	{
	int n1,n2,n3,max=0;
	cin>>n1>>n2>>n3;
	if(n1>n2)
	{
	max=n1;
	}
	else
	{
		max=n2;
	}
	if(max<n3)
	{
		max=n3;
	}
	cout<<max<<endl;
	}
	return 0;
}
