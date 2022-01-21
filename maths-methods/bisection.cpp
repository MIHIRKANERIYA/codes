
#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.01
double func(double x)
{
	//YOU CAN CHANGE THIS FUNCTION ACCORDING TO YOUR NEED
	return x*x*x - x*x + 2;
}

void bisection(double a, double b)
{
	if (func(a) * func(b) >= 0)
	{
		cout << "You have not assume right\n";
		return;
	}

	double c = a;
	
		c = (a+b)/2;
		if (func(c) == 0.0)
			cout<<c;
		else if (func(c)*func(a) < 0)
			bisection(a,c);
		else
			bisection(c,b);
	
	
}
int main()
{
	double a =-200, b = 300;
	bisection(a, b);
	return 0;
}
