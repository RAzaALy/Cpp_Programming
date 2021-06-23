#include <iostream>
#include<conio.h>
using namespace std;
class parent
{
protected:
	int n;
public:
	parent()
	{
		n=0;
	}
	parent(int p)
	{
		n=p;
	}
	void show()
	{
		cout<<"n="<<n<<endl;
	}
};
class child:public parent
{
  private:
  	char ch;
  public:
  	child():parent()
  	{
  		ch='x';
  	}
  	child(char c ,int m):parent(m)
  	{
  		ch=c;
  	}
  	void display()
  	{
  		cout<<"ch="<<ch<<endl;
  	}
};
int main()
{
	child obj1,obj2('$',100);
	cout<<"OBJECT 1 IS AS FOLLOWS:"<<endl;  
	obj1.show();
	obj1.display();
	cout<<"OBJECT 2 IS AS FOLLOWS:"<<endl;
	obj2.show();
	obj2.display();
	getch();
}