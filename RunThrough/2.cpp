#include <iostream>
using namespace std;

void isPrime(int a)
{
	// USES WHILE LOOP
	int i=2;
	while(i<a)
	{
		if(a%i==0)
		{
			cout<<" This number is not a prime"<<endl;
			return;
		}

		i++;
	}

	cout<<" This number is a prime"<<endl;
}

float factorial(int a)
{
	// USES FOR LOOP
	float fact=1;
	for(int i=1;i<=a;i++)
		fact=fact*i;
	return fact;
}

void isFactorion(int a)
{
	// WAY TO EXTRACT DIGITS
	int r,sum=0,n=a;
	while(n>0)
	{
		r=n%10;
		sum=sum+factorial(r);
		n=n/10;
	}

	if(a==sum)
		cout<<"IS a Factorion number"<<endl;
	else
		cout<<"NOT a Factorion number"<<endl;

}

int main()
{
	int ch,num;
	do
	{
		// MENU
		cout<<"Enter choice \n1.Check if prime \n2.Calculate Factorial \n3.Check if Armstrong number \n4.Exit  :  ";
		cin>>ch;
		// IF
		if(ch!=4)
		{
			cout<<"Input a number : ";
			cin>>num;
		}

		double res;

		// USES SWITCH CONSTRUCT
		switch(ch)
		{
			case 1: isPrime(num);
					break;
			case 2: res = factorial(num);
					cout<<"Factorial of "<<num<<" is : "<<res<<endl;
					break;
			case 3: isFactorion(num);
					break;
			case 4: cout<<"Exiting"<<endl;
					break;
			default:cout<<"Invalid choice"<<endl;
					break;
		}


	}while(ch!=4);//Dont forget the semicolon

	return 0;

}