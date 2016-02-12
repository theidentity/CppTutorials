#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
	int num=n;
	int sum=0;
	while(num>0)
	{
		int r=num%10;
		sum=sum+r;
		num=num/10;
	}
	return sum; 
}

int main()
{
	cout << "Sum of digits of 123 is : " << sumOfDigits(123) << endl;
	//MODIFY THE PGM TO PRINT ALL DIGITS IN WORDS AS WELL
	return 0;
}