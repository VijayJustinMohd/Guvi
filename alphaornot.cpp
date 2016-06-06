#include <iostream>
using namespace std;

int main() 
{
	int b;
	cin>>b;
	while(b--)
	{
	char a;
	cin>>a;
	if(a>='a'&& a<='z'||a>='A'&&a<='Z')
	{
		cout<<"Alphabet\n";
	}
	else
	{
		cout<<"Not an Alphabet\n";
	}
	}
	return 0;
}
