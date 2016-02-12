#include <iostream>
using namespace std;

int reverse(int n)
{
	int num=n;
	int rev=0;
	while(num>0)
	{
		int r=num%10;
		rev=rev*10+r;
		num=num/10;
	}
	return rev; 
}

int main()
{
	cout << "reverse of 123 is : " << reverse(123) << endl;
	return 0;
}