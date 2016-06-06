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
		if(b%2==0)
		{
			cout<<"Even\n";
		}
		else
		{
			cout<<"Odd\n";
		}
	}
	return 0;
}
