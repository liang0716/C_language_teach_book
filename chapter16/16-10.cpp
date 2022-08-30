#include <iostream>
#include <cstdlib>

using namespace std;

class Caaa
{
	public:
		int a;
		int b;
		int c;	
};

int main(void)
{
	Caaa obj;
	obj.a = 1;
	obj.b = 3;
	obj.c = obj.a + obj.b;
	
	cout << "a = " << obj.a << ", b = " << obj.b << ", c = " << obj.c << endl; 
	system("pasuse");
	return 0;
}
