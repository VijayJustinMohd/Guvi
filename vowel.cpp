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
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	{
		cout<<"Voewl\n";
	}
	else
	{
		cout<<"Consonant\n";
	}
	}
	return 0;
}
