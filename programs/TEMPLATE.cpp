#include <iostream>
#include <conio.h>
using namespace std;
template <class X,class Y>
void add(X a,Y b)
{
    cout<<"ENTER TWO NUMBERS FOR ADDITION:"<<endl;
	cin>>a>>b;
	cout<<"SUM ="<<a+b;
}

int main()
{
	add(50.3,35.5);
	getch();
	return 0;
}
