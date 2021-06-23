#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
   int a,b;
public:
	void set_data(int x,int y){
		a=x;
		b=y;
	}
	void show_data(){
		cout<<"\n a="<<a<<" \nb="<<b;
	}
	Complex operator +(Complex c){
		Complex temp;
		temp.a=a+c.a;
		temp. b=b+c.b;
		return (temp);
	}
};
int main()
{
	Complex c1,c2,c3;
	c1.set_data(5,3);
	c2.set_data(8,3);
	c3=c1+c2;        //c1 is caller object and c2 is an argument://c3=c1.operator+(c2):
	c3.show_data();
	getch();
	return 0;
}