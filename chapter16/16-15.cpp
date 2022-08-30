//16-15 16
#include <iostream>
#include <cstdlib>

using namespace std;

class CSphare
{
	private:
		int x;
		int y;
		int z;
		int radius;
		
	public:
		void set_location(int a, int b, int c)
		{
			x = a;
			y = b;
			z = c;
		}
			
		void set_radius(int r)
		{
			radius = r;
		}
		
		double volume(void)
		{
			return 3.14 * 4 / 3 * radius;
		}
		
		void show_center(void)
		{
			cout << "x: " << x << ", y: " << y << ", z: " << z << endl; 
		}
};


int main(void)
{
	CSphare sp;
	sp.set_location( 1, 2, 3);
	sp.set_radius(5);
	sp.show_center();
	
	cout << "v: "<< sp.volume() << endl;
	
	
	printf("\n");
	system("pause");
	return 0;
}

