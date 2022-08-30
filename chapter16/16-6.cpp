//16-6 7 8 9 
#include <iostream>
#include <cstdlib>

using namespace std;

int add(int , int );
double add(double , double );

int my_abs(int);
double my_abs(double);

int max(int, int, int);
int max(int, int);

int main(void)
{
	int sum, a, b;
	a = 5;
	b = 3;
	
	double dsum, d1, d2;
	d1 = 0.32;
	d2 = 0.7105;
	
	sum = add(a, b);
	dsum = add(d1, d2);
	
	cout << a <<" + " << b << " = "<< sum << endl;
	
	cout << d1 <<" + " << d2 << " = "<< dsum << endl;
	
	
	int i = -99;
	double d = -0.25;
	cout <<"abs("<< i <<") = " << my_abs(i) << endl;
	cout <<"abs("<< a <<") = " << my_abs(a) << endl;
	
	cout <<"abs("<< d <<") = " << my_abs(d) << endl;
	cout <<"abs("<< d1 <<") = " << my_abs(d1) << endl;
	
	
	cout <<"max("<< a << ", "<< b <<", "<< i <<") = " << max(a,b,i) << endl;
	cout <<"max("<< a << ", "<< b <<") = " << max(a,b,i) << endl;
	
	
	printf("\n");
	system("pause");
	return 0;
}

int add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}

double add(double a, double b)
{
	double sum;
	sum = a + b;
	return sum;
}

int my_abs(int i)
{
	return (i > 0)? i :-(i);
}
double my_abs(double d)
{
	return (d > 0)? d :-(d);
}

int max(int a, int b, int c)
{
	int max = a;
	 
	if(b > max)
	{
		max = b;
	}
	if(c > max)
	{
		max = c;
	}
	return max;
}

int max(int a, int b)
{
	int max = a;
	 
	if(b > max)
	{
		max = b;
	}

	return max;
}
