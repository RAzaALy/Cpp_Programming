#include <iostream>
#include <conio.h>
using namespace std;
class Test
{
private:
	static int n;
public:
	static void show()
	{
		cout<<"\n n="<<n;
		n--;
	}
};
int Test::n=10;
int main()
{
	Test::show();
	Test::show();
	getch();
	return 0;
}