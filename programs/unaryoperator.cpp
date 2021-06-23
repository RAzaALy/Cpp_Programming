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
		cout<<"\na="<<a<<"\nb="<<b;
	}
	Complex operator -(){
		Complex temp;
		temp.a=-a;
		temp. b=-b;
		return (temp);
	}
};
int main()
{
	Complex c1,c2;
	c1.set_data(5,3);
	c2=-c1;      //c1 is a caller object:or write c2=c1.operator-();  
	c2.show_data();
	getch();
	return 0;
}