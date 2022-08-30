//16-12
#include <iostream>
#include <cstdlib>

using namespace std;
class CBox
{
	public:
	int length;
	int width;
	int height;
	
	int volume(void)
	{
		return length * width * height;
	}
	
	int surface(void)
	{
		return 2 * ((length * width) + (width * height) + (height * length));
	}
};

int main(void)
{
	
	CBox bx;
	bx.length = 2;
	bx.width = 3;
	bx.height = 4;
	
	cout << "v = " << bx.volume() << endl;
	cout << "s = " << bx.surface() << endl;

	printf("\n");
	system("pause");
	return 0;
}

