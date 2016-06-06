#include <iostream>
using namespace std;

int main() 
{
	int a;
	cin>>a;
	while(a--)
	{
		int b;
		cout<<"Enter the number\n";
		cin>>b;
		if(b<0)
		{
			cout<<"Negative Number"<<endl;
		}
		if(b>0)
		{
			cout<<"Postive Number"<<endl;
		}
		if(b==0)
		{
			cout<<"Zero"<<endl;
		}
	}
	return 0;
}
