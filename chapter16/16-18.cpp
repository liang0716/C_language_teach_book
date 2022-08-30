//16-18
#include <iostream>
#include <cstdlib>

using namespace std;
class CBox
{
	private:
		int length;
		int width;
		int height;
		
	public:	
		int volume(void)
		{
			return length * width * height;
		}
		
		int surface(void)
		{
			return 2 * ((length * width) + (width * height) + (height * length));
		}
		
		CBox(int l, int w, int h)
		{
			length = l;
			width = w;
			height = h;
		}
		CBox()
		{
			length = 1;
			width = 1;
			height = 1;
		}
		
		void show(void)
		{
			cout <<"length = "<< length << ", wight = "<< width<< ", height = " << height << endl;
		}
};

int main(void)
{
	
	CBox bx_1(1,2,3);
	CBox bx_2;
	
	bx_1.show();
	bx_2.show();
	
	printf("\n");
	system("pause");
	return 0;
}

