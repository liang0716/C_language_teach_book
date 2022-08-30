#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
	int i, n, sum = 0;
	
	do 
	{
		cout << "Please key in a integer as n(n>0): " << endl;
		cin >> n;
	}
	while(n <= 0);
	
	
	do
	{
		sum += i++;		
	}while(i <= n);
	
	cout << "1+2+..+"<< n <<" = " << sum << endl;
	
	system("pause");
	return 0;
}
