//16-14
#include <iostream>
#include <cstdlib>

using namespace std;

class CWin
{
	
	private:	
		int area(void)
		{
			return width * height;	
		}
	public:	
		char id;
		int width;
		int height;
		void show_area(void)
		{
			cout << "area = "<< area() << endl; 
		}

};


int main(void)
{
	CWin win1;
	
	win1.id = 'A';
	win1.height = 12;
	win1.width =7;
	
	
	win1.show_area();

	printf("\n");
	system("pause");
	return 0;
}

