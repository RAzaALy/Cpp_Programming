#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
	int a,b;
public:
	void setdata(int x,int y){
		a=x;
		b=y;
	}
	void show_data(){
		cout<<"a="<<a<<"\nb="<<b<<endl;
	}
	friend void sum(Complex);
};
void sum(Complex c){
	cout<<"sum="<<c.a+c.b;
}
int main()
{
	Complex c1;
	c1.setdata(45,54);
	c1.show_data();
	sum(c1);
	getch();
	return 0;
}