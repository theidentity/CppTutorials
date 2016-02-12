#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	// Declarations
	string name; 
	int age;

	// Input using cin
	cout<<"Enter you name : ";
	cin>>name;
	
	cout<<"Enter you age : ";
	cin>>age;

	// strings
	string out;
	out="Hello "+name;

	// string manipulation
	stringstream convert;
	convert<<out<<" "<<age;
	out=convert.str();
	
	// Output
	cout<<out<<endl;

	return 0;
}