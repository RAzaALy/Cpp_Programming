#include <iostream>
#include <conio.h>
using namespace std;
class parent
{
private:
	int n;
public:
	parent(int p)
	{
		n=p;
	}
	void show()
	{
		cout<<"number="<<n<<endl;
	}
};
class child:public parent
{
private:
	char ch;
public:
	child(char c,int m):parent(m)
	{
      ch=c;
	}
	void show()
	{
		parent::show();
		cout<<"character="<<ch<<endl;
	}

};
int main()
{
	child c('$',25);
    c.show();
    getch();
    return 0;
}
