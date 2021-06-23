#include <iostream>
#include <conio.h>
using namespace std;
class test
{
	int a,b;
	const int x;//constant is a variable after declartion we can not change its value:
	int &y;//&y means referance:
public:
	test(int &n):x(5),y(n)
	{
		a=5;
		b=8;
	}
};
int main()
{
	int m=3;
	test obj(m);
	getch();
	return 0;
} 