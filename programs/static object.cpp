#include <iostream>
#include <conio.h>
using namespace std;
class Dummy
{
private:
	static int n;
public:
	Dummy()
	{
		n++;
	}
	static void show()
	{
		cout<<"YOU HAVE CREATED "<<n<<" OBJECTS SO FAR."<<endl;
	}
};
int Dummy::n=0;
int main()
{
	Dummy::show();
	Dummy d1;
	d1.show();
	Dummy d3;
    d3.show();
    getch();
    return 0;
}