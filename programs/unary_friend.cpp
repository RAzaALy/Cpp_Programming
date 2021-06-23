#include <iostream>
#include<conio.h>
using namespace std;
class Complex
{
	int a,b;
public:
	void setData(int x,int y){
		a=x;
		b=y;
	}
	void showData(){
		cout<<"a="<<a<<"\tb="<<b<<endl;
	}
	friend Complex operator-(Complex);
};
Complex operator-(Complex X)
{
   Complex temp;
   temp.a=-X.a;
   temp.b=-X.b;
   return (temp);
}
int main()
{
	Complex c1,c2;
	c1.setData(4,5);
	c2=-c1;//c2=operator-(c1);//there is no caller object in friend function:
	c2.showData();
	c1.showData();
	getch();
	return 0;
}