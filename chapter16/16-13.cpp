//16-13
#include <iostream>
#include <cstdlib>

using namespace std;

class CRect
{
	public:
	int width;
	int height;
	double weight;
	
	void set(double wg)
	{
		weight = wg;
	}
	
	void set(int wd, int hi)
	{
		width = wd;
		height = hi;
	}
	
	void set(double wg, int wd, int hi)
	{
		weight = wg;
		width = wd;
		height = hi;
	}
	
	void show(void)
	{
		cout << "重: " << weight << ", 寬度: " << width << ", 高度: " << height << endl; 
	}
};

int main(void)
{
	CRect rct;
	
	rct.set(60.05, 30, 45);
	rct.show();
	
	rct.set(100, 8);
	rct.show();
	
	rct.set(13.9);
	rct.show();

	printf("\n");
	system("pause");
	return 0;
}

