#include <iostream>
using namespace std;

double factorial(int n)
{
	double fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return fact;
}

int main()
{
	cout << "Factorial of 5 is : " << factorial(5) << endl;
	return 0;
}