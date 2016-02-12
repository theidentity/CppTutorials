#include <iostream>
using namespace std;

int main()
{
	int i=10;
	//Change the number to 15,-5,0 and observe the results
	if(i>0)
	{
		cout<<"Number is : "<<i<<endl;
		cout<<"It is +ve"<<endl;
	}
	else if(i<0)
	{
		cout<<"Number is : "<<i<<endl;
		cout<<"It is -ve"<<endl;
	}
	else
	{
		cout<<"Number is : "<<i<<endl;
		cout<<"It is neither -ve nor +ve"<<endl;
	}
	return 0;
}