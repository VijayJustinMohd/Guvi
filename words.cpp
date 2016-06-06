#include<string.h>
#include <iostream>
using namespace std;

int main() 
{
	string a;
	int count=0;
	getline(cin,a);
	int len=a.length();
for(int i=0;i<len;i++)
{
	if(a[i]==' ')
	count++;
}
cout<<count+1;
	return 0;
}
