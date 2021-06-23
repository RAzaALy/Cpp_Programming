#include <iostream>
#include <conio.h>
using namespace std;
class add
{
private:
	int a,b;
public:
	void input()
	{
		cout<<"ENTER VALUE OF A:";
		cin>>a;
		cout<<"ENTER VALUE OF B:";
		cin>>b;
	}
	void show()
	{
		cout<<"A="<<a;
		cout<<"  B="<<b;
	}
	add operator +(add x)
	{
		add temp;
		temp.a=a+x.a;
		temp.b=b+x.b;
		return(temp);
	}

};
int main()
{
	add n1,n2,n3;
	cout<<"ENTER VALUE FOR OBJECT 1:"<<endl;
	n1.input();
	cout<<"ENTER VALUE FOR OBJECT 2:"<<endl;
	n2.input();
	n3=n1+n2;//ALSO WRITE AS n1.operator+(n2);
	cout<<"ADDITION OF OBJECT 1 AND OBJECT 2:"<<endl;
	n3.show();
	getch();
	return 0;
}