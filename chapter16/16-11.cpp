//16-11
#include <iostream>
#include <cstdlib>

using namespace std;

class CWin
{
	public:
		char id;
		int width;
		int height;
		char title[50];
		int area(void)
		{
			return width*height;
		}
		
		void set_title(char *ch)
		{
			int i = 0;
			while(*(ch + i) != '\0')
			{
				title[i] = *(ch + i);
				i++;
			}
		}
		
		void set_display(void)
		{
			cout << title << endl;	
		}
};


int main(void)
{
	char tt[50] = "Hello hell!"; 
	CWin win1;
	win1.id = 'A';
	win1.width = 50;
	win1.height = 40;
	
	win1.set_title(tt);
	win1.set_display();


	printf("\n");
	system("pause");
	return 0;
}

