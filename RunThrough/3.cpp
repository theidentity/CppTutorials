#include <iostream>
using namespace std;

class Shape
{

	double area;

public:
	// Constructors : Polymorphism
	Shape()
	{
		area=0;
	}
	Shape(double ar)
	{
		area=ar;
	}	
	// Polymorphism in Functions
	void Area(int a)
	{
		area=a*a;
	}

	void Area(int a,int b)
	{
		area=a*b;
	}

	void Area(float a)
	{
		area=3.14*a*a;
	}

	void displayArea()
	{
		cout<<"Area of shape is : "<<area<<endl;
	}

};

int main()
{
	Shape s1;
	// Shape s1(100);
	s1.displayArea();
	s1.Area(10);
	// s1.Area(10,20);
	// s1.Area(10.0f);
	s1.displayArea();

	return 0;
}