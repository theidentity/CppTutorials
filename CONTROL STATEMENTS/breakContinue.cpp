#include <iostream>
using namespace std;

int main()
{
	cout<<"NORMAL"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<i<<" ";
	}

	cout<<endl;
	cout<<"BREAK"<<endl;
	for(int i=0;i<5;i++)
	{
		if(i == 2)
			break;
		cout<<i<<" ";
	}

	cout<<endl;
	cout<<"CONTINUE"<<endl;

	for(int i=0;i<5;i++)
	{
		if(i == 2)
			continue;
		cout<<i<<" ";
	}

	cout<<endl;
	return 0;
}