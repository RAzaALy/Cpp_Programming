#include<iostream>
#include <conio.h>
#include<stdio.h>
using namespace std;
class parent
{
protected:
	int n;
public:
	parent()
	{n=0;}
	void forward()
	{
		n++;
	}
	void show()
	{
		cout<<"n="<<n<<endl;
	}
};
class child:public parent
{
public:
	void backward()
	{
		n--;
	}
};
int main()
{
    child c1;
    c1.show();
    c1.forward();
    c1.show();
    c1.backward();
    c1.show();
    getch();
    return 0;
}
