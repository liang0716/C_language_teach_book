//16-17 
#include <iostream>
#include <cstdlib>

using namespace std;

class CRectangle
{
	private:
		int width;
		int height;
		
	public:	
	CRectangle(int w, int h)
	{
		width = w;
		height = h;
	}
	
	CRectangle(void)
	{
		width = 10;
		height = 8;
	}
	void show(void)
	{
		cout << "wight = "<< width<< ", height = " << height << endl;
	}
};

int main(void)
{
	
	CRectangle crect_1(12, 34);
	crect_1.show();

	CRectangle crect_2;
	crect_2.show();

	printf("\n");
	system("pause");
	return 0;
}

