#include <iostream>
using namespace std;

int main()
{
	int n1;
	float n2;
	double res;
	string name;
	cout<<"Enter your name"<<endl;
	cin>>name;
	cout<<"Enter first number"<<endl;
	cin>>n1;
	cout<<"Enter second number"<<endl;
	cin>>n2;
	res=n1+n2;
	cout<<"Hello "<<name<<",the result is : "<<res<<endl;
	return 0; 
}